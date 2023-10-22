#include "ShrubberyCreationForm.hpp"
#include "Bureaucrat.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(): AForm("ShrubberyCreationForm", 145, 137)
{
    std::cout << "ShrubberyCreationForm Default constructor called" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target): AForm("ShrubberyCreationForm", 145, 137), _target(target)
{
    std::cout << "ShrubberyCreationForm list constructor called" << std::endl;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
    std::cout << "ShrubberyCreationForm Destructor called" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm   &FormClass): AForm(FormClass.getName(), FormClass.getGradeToBeSigned(), FormClass.getGradeToBeExecuted())
{
}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm &ShrubberyCreationFormClass)
{
    if (this != &ShrubberyCreationFormClass)
    {
        this->setSign(ShrubberyCreationFormClass.getIsSinged());
    }
    return *this;
}

void ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
    if (this->getGradeToBeExecuted() < executor.getGrade())
    {
        throw Bureaucrat::GradeTooLowException();
    } else if (this->getIsSinged() == false)
    {
        throw ShrubberyCreationForm::IsNotSignedException();
    }
    std::ofstream writing_file;
    std::string filename = this->_target + "_shrubbery";
    writing_file.open(filename, std::ios::out);
    for (int i = 0; i < 5; i++)
    {
        writing_file << 
        "         v" << std::endl <<
			"        >X<" << std::endl <<
			"         A" << std::endl <<
			"        d$b" << std::endl <<
			"      .d\\$$b." << std::endl <<
			"    .d$i$$\\$$b." << std::endl <<
			"       d$$@b" << std::endl <<
			"      d\\$$$ib" << std::endl <<
			"    .d$$$\\$$$b" << std::endl <<
			"  .d$$@$$$$\\$$ib." << std::endl <<
			"      d$$i$$b" << std::endl <<
			"     d\\$$$$@$b" << std::endl <<
			"  .d$@$$\\$$$$$@b." << std::endl <<
			".d$$$$i$$$\\$$$$$$b." << std::endl <<
			"        ###" << std::endl <<
			"        ###" << std::endl <<
			"        ###" << std::endl <<
            std::endl;
    }
    writing_file.close();
}
