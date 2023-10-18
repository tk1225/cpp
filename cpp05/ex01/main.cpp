#include "Bureaucrat.hpp"
#include "Form.hpp"
#include<string>
#include<iostream>

int main()
{ 
    Form test = Form("test", 15, 15);
    Bureaucrat b1 = Bureaucrat("B1", 2);
    Bureaucrat b2 = Bureaucrat("B2", 20);

    try
    {
        test.beSigned(b1);
        test.beSigned(b2);
    }   
    catch (std::exception & e)
    {
        std::cout << e.what() << std::endl;
    }
}
