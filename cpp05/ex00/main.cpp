#include "Bureaucrat.hpp"
#include<string>
#include<iostream>

int main()
{ 
    try
    {
        Bureaucrat tmp = Bureaucrat("test", 1);
        tmp.increaseGrade();
    }   
    catch (std::exception & e)
    {
        std::cout << e.what() << std::endl;
    }
    Bureaucrat print = Bureaucrat("test", 1);
    std::cout << print << std::endl;
    Bureaucrat test_copy;
    Bureaucrat test_copy_orgin = Bureaucrat("test", 17);
    test_copy = test_copy_orgin;
    try
    {
        Bureaucrat("test", 170);
    }   
    catch (std::exception & e)
    {
        std::cout << e.what() << std::endl;
    }
    
    std::cout << test_copy << std::endl;
}
