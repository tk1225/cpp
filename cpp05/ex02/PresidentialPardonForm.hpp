#ifndef PresidentialPardonForm_HPP
#define PresidentialPardonForm_HPP

#include<string>
#include<iostream>
#include <cstdlib> 
#include "AForm.hpp"

class Bureaucrat;
class PresidentialPardonForm : public AForm
{
    private:
        const std::string _target;
    public:
        PresidentialPardonForm();
        PresidentialPardonForm(std::string target);
        PresidentialPardonForm(const PresidentialPardonForm   &PresidentialPardonFormClass);
        PresidentialPardonForm& operator=(const PresidentialPardonForm &PresidentialPardonFormClass);
        virtual ~PresidentialPardonForm();

        virtual void execute(Bureaucrat const & executor) const;
};

#endif
