#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include<string>
#include<iostream>

class AForm;
class Bureaucrat
{
    private:
        const std::string _name;
        int _grade;

    public:
        Bureaucrat();
        Bureaucrat(std::string name, int grade);
        Bureaucrat(const Bureaucrat   &BureaucratClass);
        Bureaucrat& operator=(const Bureaucrat &BureaucratClass);
        void increaseGrade();
        void decreaseGrade();
        virtual ~Bureaucrat();

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
        void signForm(AForm& form);
        void executeForm(AForm const & form);
};

inline std::ostream& operator<<(std::ostream& os, const Bureaucrat &b) {
        os << b.getName();
        os << ", bureaucrat grade ";
        os << b.getGrade();
        return os;
}
#endif
