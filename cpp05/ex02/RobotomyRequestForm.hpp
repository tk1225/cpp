#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

#include<string>
#include<iostream>
#include <cstdlib> 
#include "AForm.hpp"

class Bureaucrat;
class RobotomyRequestForm : public AForm
{
    private:
        const std::string _target;
    public:
        RobotomyRequestForm();
        RobotomyRequestForm(std::string target);
        RobotomyRequestForm(const RobotomyRequestForm   &RobotomyRequestFormClass);
        RobotomyRequestForm& operator=(const RobotomyRequestForm &RobotomyRequestFormClass);
        virtual ~RobotomyRequestForm();

        virtual void execute(Bureaucrat const & executor) const;
};

#endif
