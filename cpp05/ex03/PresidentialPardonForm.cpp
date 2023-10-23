#include "PresidentialPardonForm.hpp"
#include "Bureaucrat.hpp"

PresidentialPardonForm::PresidentialPardonForm(): AForm("PresidentialPardonForm", 25, 5)
{
    std::cout << "PresidentialPardonForm Default constructor called" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(std::string target): AForm("PresidentialPardonForm", 25, 5), _target(target)
{
    std::cout << "PresidentialPardonForm list constructor called" << std::endl;
}

PresidentialPardonForm::~PresidentialPardonForm()
{
    std::cout << "PresidentialPardonForm Destructor called" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm   &FormClass): AForm(FormClass.getName(), FormClass.getGradeToBeSigned(), FormClass.getGradeToBeExecuted())
{
}

PresidentialPardonForm& PresidentialPardonForm::operator=(const PresidentialPardonForm &PresidentialPardonFormClass)
{
    if (this != &PresidentialPardonFormClass)
    {
        this->setSign(PresidentialPardonFormClass.getIsSinged());
    }
    return *this;
}

void PresidentialPardonForm::execute(Bureaucrat const & executor) const
{
    if (this->getGradeToBeExecuted() < executor.getGrade())
    {
        throw Bureaucrat::GradeTooLowException();
    } else if (this->getIsSinged() == false)
    {
        throw PresidentialPardonForm::IsNotSignedException();
    }
    std::cout << this->_target << " has been pardoned by Zaphod Beeblebrox." << std::endl;
}
