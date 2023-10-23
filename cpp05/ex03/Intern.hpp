#ifndef INTERN_HPP
#define INTERN_HPP

#include<string>
#include<iostream>

class AForm;
class Intern
{
    public:
        Intern();
        Intern(const Intern   &InternClass);
        Intern& operator=(const Intern &InternClass);
        virtual ~Intern();
        static AForm *RobotomyRequestFormCreate(const std::string target);
        static AForm *ShrubberyCreationFormCreate(const std::string target);
        static AForm *PresidentialPardonFormCreate(const std::string target);
        AForm *makeForm(std::string request_form, std::string name);

        class ArgNotEnoughException : public std::exception {
            public:
                virtual const char* what() const throw() { return "Arg is not enough"; }
        };
};

#endif
