#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat()
{
    std::cout << "Bureaucrat Default constructor called" << std::endl;
}

Bureaucrat::Bureaucrat(std::string name, int grade): _name(name), _grade(grade)
{
    std::cout << "Bureaucrat  constructor called" << std::endl;
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
