#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include<string>
#include<iostream>

int main(void)
{
	{
		std::cout << "\033[34mConstructing\033[0m" << std::endl;
		
        Bureaucrat b1 = Bureaucrat("B1", 2);
        ShrubberyCreationForm s1_not_signed= ShrubberyCreationForm("not_signed_shrubbery");

		std::cout << "\033[34mTesting1(not signed)\033[0m" << std::endl;

        std::cout << b1 << std::endl;
        std::cout << s1_not_signed << std::endl;

		try
		{
            b1.executeForm(s1_not_signed);
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
		
        Bureaucrat b1 = Bureaucrat("B1", 150);
        ShrubberyCreationForm s2_signed= ShrubberyCreationForm("signed_shrubbery");

		std::cout << "\033[34mTesting2(grade is too low to execute)\033[0m" << std::endl;

        std::cout << b1 << std::endl;
        std::cout << s2_signed << std::endl;

		try
		{
            b1.signForm(s2_signed);
            b1.executeForm(s2_signed);
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
		
        Bureaucrat b1 = Bureaucrat("B1", 2);
        ShrubberyCreationForm s2_signed= ShrubberyCreationForm("signed_shrubbery");

		std::cout << "\033[34mTesting3(signedShrubbery)\033[0m" << std::endl;

        std::cout << b1 << std::endl;
        std::cout << s2_signed << std::endl;

		try
		{
            b1.signForm(s2_signed);
            b1.executeForm(s2_signed);
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
		
        Bureaucrat b1 = Bureaucrat("B1", 15);
        RobotomyRequestForm s2_signed= RobotomyRequestForm("signed_robotomy");

		std::cout << "\033[34mTesting4(signedRobotomy)\033[0m" << std::endl;

        std::cout << b1 << std::endl;
        std::cout << s2_signed << std::endl;

		try
		{
            b1.signForm(s2_signed);
            for (size_t i = 0; i < 5; i++)
            {
                b1.executeForm(s2_signed);    
            }
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
            
            Bureaucrat b1 = Bureaucrat("B1", 3);
            PresidentialPardonForm s2_signed= PresidentialPardonForm("signed_presidential_pardon");

            std::cout << "\033[34mTesting5(signedPresidentialPardon)\033[0m" << std::endl;

            std::cout << b1 << std::endl;
            std::cout << s2_signed << std::endl;

            try
            {
                b1.signForm(s2_signed);
                b1.executeForm(s2_signed);
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
