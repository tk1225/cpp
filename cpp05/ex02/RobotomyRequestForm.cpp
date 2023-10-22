#include "RobotomyRequestForm.hpp"
#include "Bureaucrat.hpp"

RobotomyRequestForm::RobotomyRequestForm(): AForm("RobotomyRequestForm", 145, 137)
{
    std::cout << "RobotomyRequestForm Default constructor called" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(std::string target): AForm("RobotomyRequestForm", 145, 137), _target(target)
{
    std::cout << "RobotomyRequestForm list constructor called" << std::endl;
}

RobotomyRequestForm::~RobotomyRequestForm()
{
    std::cout << "RobotomyRequestForm Destructor called" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm   &FormClass): AForm(FormClass.getName(), FormClass.getGradeToBeSigned(), FormClass.getGradeToBeExecuted())
{
}

RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm &RobotomyRequestFormClass)
{
    if (this != &RobotomyRequestFormClass)
    {
        this->setSign(RobotomyRequestFormClass.getIsSinged());
    }
    return *this;
}

void RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
    if (this->getGradeToBeExecuted() < executor.getGrade())
    {
        throw Bureaucrat::GradeTooLowException();
    } else if (this->getIsSinged() == false)
    {
        throw RobotomyRequestForm::IsNotSignedException();
    }
    std::srand( time(NULL) );
    if (rand() % 2 == 0)
    {
        std::cout << "Robotomy success" << std::endl;
    }
    else
    {
        std::cout << "Robotomy failed" << std::endl;
    }
}
