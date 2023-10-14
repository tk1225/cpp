#include "Form.hpp"

Form::Form()
{
    std::cout << "Form Default constructor called" << std::endl;
}

// Form::Form(std::string name, int gradeToBeSigned): _name(name), _gradeToBeSigned(gradeToBeSigned), _gradeToBeExecuted(0)
// {
//     std::cout << "Form  list init constructor called" << std::endl;
// }

// Form::Form(std::string name, int gradeToBeSigned, int gradeToBeExecuted): _name(name), _gradeToBeSigned(gradeToBeSigned), _gradeToBeSigned(gradeToBeSigned)
// {
//     std::cout << "Form  list init constructor called" << std::endl;
// }

Form::~Form()
{
    std::cout << "Form Destructor called" << std::endl;
}

Form::Form(const Form   &FormClass)
{
    *this = FormClass;
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

int getGradeToBeExecuted() const
{
    return (this.);
}