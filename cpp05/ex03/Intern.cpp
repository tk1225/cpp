#include "Intern.hpp"
#include "AForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"

Intern::Intern()
{
    std::cout << "Intern Default constructor called" << std::endl;
}

Intern::~Intern()
{
    std::cout << "Intern Destructor called" << std::endl;
}

Intern::Intern(const Intern   &InternClass)
{
    *this = InternClass;
}

Intern& Intern::operator=(const Intern &InternClass)
{
    if (this == &InternClass)
		return *this;
    return *this;
}

AForm *Intern::PresidentialPardonFormCreate(const std::string target)
{   
    return new PresidentialPardonForm(target);
}

AForm *Intern::ShrubberyCreationFormCreate(const std::string target)
{   
    return new ShrubberyCreationForm(target);
}

AForm *Intern::RobotomyRequestFormCreate(const std::string target)
{   
    return new RobotomyRequestForm(target);
}

AForm *Intern::makeForm(std::string request_form, std::string name)
{
    AForm	*(*fct[3])(std::string target) = { PresidentialPardonFormCreate, ShrubberyCreationFormCreate, RobotomyRequestFormCreate};
    const std::string word[3] = {"PresidentialPardonForm", "ShrubberyCreationForm", "RobotomyRequestForm"};
    int i = 0;

    while (i < 3)
    {
        if (request_form == word[i])
        {
            std::cout << "Intern creates " << request_form << std::endl;
            return (fct[i](name));
        }
        i++;
    }
    throw Intern::ArgNotEnoughException();
    return NULL;
}

