#include<string>
#include<iostream>

int main(int argc, char *argv[])
{
    (void)argc;
    (void)argv;
    std::string s = "HI THIS IS BRAIN";
    std::string* stringPTR= &s;
    std::string& stringREF= s;

    std::cout << std::hex << &s << std::endl;
    std::cout << std::hex << stringPTR << std::endl;
    std::cout << std::hex << &stringREF << std::endl;

    std::cout << s << std::endl;
    std::cout << *stringPTR << std::endl;
    std::cout << stringREF << std::endl;

    return (0);
}
