#include "Bureaucrat.hpp"
#include "AForm.hpp"

Bureaucrat::Bureaucrat(): _name("default"), _grade(150)
{
    std::cout << "Bureaucrat Default constructor called" << std::endl;
}

Bureaucrat::Bureaucrat(std::string name, int grade): _name(name), _grade(grade)
{
    std::cout << "Bureaucrat  constructor called" << std::endl;
    if (_grade < 1)
    {
        throw Bureaucrat::GradeTooHighException();
    }
    else if (_grade > 150)
    {
        throw Bureaucrat::GradeTooLowException();
    }
}

Bureaucrat::~Bureaucrat()
{
    std::cout << "Bureaucrat Destructor called" << std::endl;
}

Bureaucrat::Bureaucrat(const Bureaucrat   &BureaucratClass)
{
    *this = BureaucratClass;
}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat &BureaucratClass)
{
    if (this != &BureaucratClass)
    {
        this->_grade = BureaucratClass.getGrade();
    }
    return *this;
}

void Bureaucrat::increaseGrade()
{
    if (_grade == 1)
    {
        throw Bureaucrat::GradeTooHighException();
    }
    _grade--;
}

void Bureaucrat::decreaseGrade()
{
    if (_grade == 150)
    {
        throw Bureaucrat::GradeTooLowException();
    }
    _grade++;
}

std::string Bureaucrat::getName() const
{
    return (this->_name);
}

int Bureaucrat::getGrade() const
{
    return (this->_grade);
}

void Bureaucrat::signForm(AForm& form)
{
    if (form.getGradeToBeSigned() >= this->_grade)
    {
        std::cout << this->_name  << " signed " << form.getName() << std::endl;
        form.setSign(true);
    }
    else
    {
        std::cout << this->_name  << " couldn't sign " << form.getName() << " because Bureaucrat's grade is not enough." << std::endl;
        throw AForm::GradeTooLowException();
    }
}

void Bureaucrat::executeForm(AForm const & form)
{
    if (form.getGradeToBeExecuted() >= this->_grade)
    {
        form.execute(*this);
        std::cout << this->_name  << " executed " << form.getName() << std::endl;
    }
    else
    {
        std::cout << this->_name  << " can not executed " << form.getName() << std::endl;
        throw AForm::GradeTooLowException();
    }
}
