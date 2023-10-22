#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include<string>
#include<iostream>

int main()
{
    Bureaucrat b1 = Bureaucrat("B1", 2);
    Bureaucrat b2 = Bureaucrat("B2", 140);
    ShrubberyCreationForm s1_not_signed= ShrubberyCreationForm("target_test");
    ShrubberyCreationForm s2_signed= ShrubberyCreationForm("target_test");

    try
    {
        // s1_not_signed.execute(b1);
        // s2_signed.execute(b2);

        s2_signed.beSigned(b1);
        s2_signed.execute(b1);
    }   
    catch (std::exception & e)
    {
        std::cout << e.what() << std::endl;
    }
}
