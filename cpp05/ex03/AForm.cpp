#include "AForm.hpp"
#include "Bureaucrat.hpp"

AForm::AForm(): _name("AForm"), _gradeToBeSigned(0), _gradeToBeExecuted(0)
{
    std::cout << "AForm Default constructor called" << std::endl;
}

AForm::AForm(std::string name, int gradeToBeSigned, int gradeToBeExecuted): _name(name),_gradeToBeSigned(gradeToBeSigned), _gradeToBeExecuted(gradeToBeExecuted)
{
    std::cout << "AForm  list init constructor called" << std::endl;
}

AForm::~AForm()
{
    std::cout << "AForm Destructor called" << std::endl;
}

AForm::AForm(const AForm   &AFormClass): _name(AFormClass.getName()), _gradeToBeSigned(AFormClass.getGradeToBeSigned()), _gradeToBeExecuted(AFormClass.getGradeToBeExecuted())
{
}

AForm& AForm::operator=(const AForm &AFormClass)
{
    if (this != &AFormClass)
    {
        this->_isSinged = AFormClass.getIsSinged();
    }
    return *this;
}

std::string AForm::getName() const
{
    return (this->_name);
}

int AForm::getGradeToBeSigned() const
{
    return (this->_gradeToBeSigned);
}

int AForm::getGradeToBeExecuted() const
{
    return (this->_gradeToBeExecuted);
}

bool AForm::getIsSinged() const
{
    return (this->_isSinged);
}

void AForm::beSigned(Bureaucrat &BureaucratClass)
{
    BureaucratClass.signForm(*this);
}

void AForm::setSign(bool IsSign)
{
    this->_isSinged = IsSign;
}
