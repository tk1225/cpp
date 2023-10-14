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
}
