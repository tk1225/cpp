#include "Form.hpp"
#include "Bureaucrat.hpp"

Form::Form(): _name("Form"), _gradeToBeSigned(0), _gradeToBeExecuted(0)
{
    std::cout << "Form Default constructor called" << std::endl;
}

Form::Form(std::string name, int gradeToBeSigned): _name(name), _gradeToBeSigned(gradeToBeSigned), _gradeToBeExecuted(0)
{
    std::cout << "Form  list init constructor called" << std::endl;
}

Form::Form(std::string name, int gradeToBeSigned, int gradeToBeExecuted): _name(name), _gradeToBeSigned(gradeToBeSigned), _gradeToBeExecuted(gradeToBeExecuted)
{
    std::cout << "Form  list init constructor called" << std::endl;
}

Form::~Form()
{
    std::cout << "Form Destructor called" << std::endl;
}

Form::Form(const Form   &FormClass): _name(FormClass.getName()), _gradeToBeSigned(FormClass.getGradeToBeSigned()), _gradeToBeExecuted(FormClass.getGradeToBeExecuted())
{
}

Form& Form::operator=(const Form &FormClass)
{
    if (this != &FormClass)
    {
        this->_isSinged = FormClass.getIsSinged();
    }
    return *this;
}

std::string Form::getName() const
{
    return (this->_name);
}

int Form::getGradeToBeSigned() const
{
    return (this->_gradeToBeSigned);
}

int Form::getGradeToBeExecuted() const
{
    return (this->_gradeToBeExecuted);
}

bool Form::getIsSinged() const
{
    return (this->_isSinged);
}

void Form::beSigned(Bureaucrat &BureaucratClass)
{
    BureaucratClass.signForm(*this);
}
