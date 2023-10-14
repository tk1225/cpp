#ifndef FORM_HPP
#define FORM_HPP

#include<string>
#include<iostream>

class Form
{
    private:
        std::string _name;
        bool _isSinged;
        int _grade;

    public:
        Form();
        Form(std::string name, int grade, bool _isSinged);
        Form(const Form   &FormClass);
        Form& operator=(const Form &FormClass);
        // void increaseGrade();
        // void decreaseGrade();
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
        int getGrade() const;
        bool getIsSinged() const;
        void beSigned();
};

inline std::ostream& operator<<(std::ostream& os, const Form &b) {
        os << b.getName();
        os << ", Form grade ";
        os << b.getGrade();
        return os;
}
#endif