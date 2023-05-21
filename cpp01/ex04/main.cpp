#include<iostream>
#include<string>
#include <fstream>

std::string replace_s(std::string s, std::string rep_s, std::string to_s)
{
    std::string res = "";

    while (1)
    {
        size_t s_in = s.find(rep_s);
        if (s_in == std::string::npos)
        {
            res += s;
            break;
        }
        else
        {
            res += s.substr(0, s_in);
            res += to_s;
            s = s.substr(s_in + rep_s.length());
        }
    }
    return (res);
}

int main(int argc, char *argv[])
{
    if (argc != 4)
        return (-1);
    std::string filename = argv[1];
    std::string rep_s = argv[2];
    std::string to_s = argv[3];

    std::ifstream ifs("./" + filename);
    std::ofstream ofs("./" + filename + ".replace");
    std::string str;

    if (ifs.fail()) {
        std::cerr << "Failed to open file." << std::endl;
        return -1;
    }
    while (getline(ifs, str)) {
        ofs << replace_s(str, rep_s, to_s) << std::endl;
    }
}
