#ifndef AFORM_HPP
#define AFORM_HPP

#include<string>
#include<iostream>

class Bureaucrat;
class AForm
{
    private:
        const std::string _name;
        bool _isSinged;
        const int _gradeToBeSigned;
        const int _gradeToBeExecuted;

    public:
        AForm();
        AForm(std::string name, int gradeToBeSigned, int gradeToBeExecuted);
        AForm(const AForm   &AFormClass);
        AForm& operator=(const AForm &AFormClass);
        virtual ~AForm();

        class GradeTooHighException : public std::exception {
            public:
                virtual const char* what() const throw() { return "Grade too high"; }
        };
        class GradeTooLowException : public std::exception {
            public:
                virtual const char* what() const throw() { return "Grade too low"; }
        };
        class IsNotSignedException : public std::exception {
            public:
                virtual const char* what() const throw() { return "Form is not singed"; }
        };

        std::string getName() const;
        int getGradeToBeSigned() const;
        int getGradeToBeExecuted() const;
        bool getIsSinged() const;
        void setSign(bool IsSign);
        void beSigned(Bureaucrat &BureaucratClass);
        virtual void execute(Bureaucrat const & executor) const = 0;
};

inline std::ostream& operator<<(std::ostream& os, const AForm &b) {
        os << b.getName();
        os << ", AForm gradeToBeSiged is ";
        os << b.getGradeToBeSigned();
        os << " and, AForm gradeToBeExecuted is ";
        os << b.getGradeToBeExecuted();
        return os;
}
#endif
