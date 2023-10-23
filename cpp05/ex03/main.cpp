#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"
#include<string>
#include<iostream>

int main(void)
{
	{
		std::cout << "\033[34mConstructing\033[0m" << std::endl;
		
        Intern i = Intern();
		std::cout << "\033[34mTesting1(not match)\033[0m" << std::endl;

		try
		{
            AForm * res = i.makeForm("unmatch", "test1");
            std::cout << "name is" << res->getName() << std::endl;
            delete res;
		}
		catch(std::exception & e)
		{
            std::cout << "error: " << e.what() << std::endl;
		}
		std::cout << std::endl;

		std::cout << "\033[34mDeconstructing\033[0m" << std::endl;

		std::cout << std::endl;
	}
    std::cout << "--------------------------------------------------------------------------------------------------------------" << std::endl;
    {
		std::cout << "\033[34mConstructing\033[0m" << std::endl;
		
        Intern i = Intern();
        Bureaucrat b1 = Bureaucrat("B1", 2);
		std::cout << "\033[34mTesting2(match)\033[0m" << std::endl;

		try
		{
            AForm * res = i.makeForm("RobotomyRequestForm", "test2");
            b1.signForm(*res);
            b1.executeForm(*res);
            std::cout << "name is " << res->getName() << std::endl;
            delete res;
		}
		catch(std::exception & e)
		{
            std::cout << "error: " << e.what() << std::endl;
		}
		std::cout << std::endl;

		std::cout << "\033[34mDeconstructing\033[0m" << std::endl;

		std::cout << std::endl;
	}
	return (0);
}
