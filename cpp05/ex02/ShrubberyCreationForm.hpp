#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP

#include<string>
#include<iostream>
#include <fstream>
#include "AForm.hpp"

class Bureaucrat;
class ShrubberyCreationForm : public AForm
{
    private:
        const std::string _target;
    public:
        ShrubberyCreationForm();
        ShrubberyCreationForm(std::string target);
        ShrubberyCreationForm(const ShrubberyCreationForm   &ShrubberyCreationFormClass);
        ShrubberyCreationForm& operator=(const ShrubberyCreationForm &ShrubberyCreationFormClass);
        virtual ~ShrubberyCreationForm();

        virtual void execute(Bureaucrat const & executor) const;
};

#endif
