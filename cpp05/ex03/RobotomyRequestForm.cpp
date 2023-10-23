#include "RobotomyRequestForm.hpp"
#include "Bureaucrat.hpp"

RobotomyRequestForm::RobotomyRequestForm(): AForm("RobotomyRequestForm", 72, 45)
{
    std::cout << "RobotomyRequestForm Default constructor called" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(std::string target): AForm("RobotomyRequestForm", 72, 45), _target(target)
{
    std::cout << "RobotomyRequestForm list constructor called" << std::endl;
}

RobotomyRequestForm::~RobotomyRequestForm()
{
    std::cout << "RobotomyRequestForm Destructor called" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm   &FormClass): AForm(FormClass.getName(), FormClass.getGradeToBeSigned(), FormClass.getGradeToBeExecuted())
{
}

RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm &RobotomyRequestFormClass)
{
    if (this != &RobotomyRequestFormClass)
    {
        this->setSign(RobotomyRequestFormClass.getIsSinged());
    }
    return *this;
}

void RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
    if (this->getGradeToBeExecuted() < executor.getGrade())
    {
        throw Bureaucrat::GradeTooLowException();
    } else if (this->getIsSinged() == false)
    {
        throw RobotomyRequestForm::IsNotSignedException();
    }
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<int> distribution(0, 1);
    int randomValue = distribution(gen);
    if (randomValue % 2 == 0)
    {
        
        std::cout << "Robotomy success!" << std::endl;
    }
    else
    {
        std::cout << "Robotomy failed!" << std::endl;
    }
}
