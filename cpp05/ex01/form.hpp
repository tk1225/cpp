#ifndef FORM_HPP
#define FORM_HPP

#include<string>
#include<iostream>

class Bureaucrat;
class Form
{
    private:
        const std::string _name;
        bool _isSinged;
        const int _gradeToBeSigned;
        const int _gradeToBeExecuted;

    public:
        Form();
        Form(std::string name, int gradeToBeSigned, int gradeToBeExecuted);
        Form(const Form   &FormClass);
        Form& operator=(const Form &FormClass);
        virtual ~Form();

        class GradeTooHighException : public std::exception {
            public:
                virtual const char* what() const throw() { return "Grade too high"; }
        };
        class GradeTooLowException : public std::exception {
            public:
                virtual const char* what() const throw() { return "Grade too low"; }
        };

        std::string getName() const;
        int getGradeToBeSigned() const;
        int getGradeToBeExecuted() const;
        bool getIsSinged() const;
        void beSigned(Bureaucrat &BureaucratClass);
        void setSign(bool IsSign);
};

inline std::ostream& operator<<(std::ostream& os, const Form &b) {
        os << b.getName();
        if (b.getIsSinged())
        {
            os << ", Form is signed";
        }
        else
        {
            os << ", Form is not signed";
        }
        os << ", Form gradeToBeSiged is ";
        os << b.getGradeToBeSigned();
        os << " and, Form gradeToBeExecuted is ";
        os << b.getGradeToBeExecuted();
        return os;
}
#endif
