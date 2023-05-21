#include "Harl.hpp"

Harl::Harl(){}
Harl::~Harl(){}

void Harl::complain(std::string level)
{
    HarlFunc funcs[] = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
    std::string levels[] = {"DEBUG", "INFO", "WARNING", "ERROR"};
    int i = 0;

    while (i < 4)
    {
        if (level == levels[i])
            break;
        i++;
    }
    switch (i)
    {
		case 0:
            (this->*funcs[0])();
		case 1:
            (this->*funcs[1])();
        case 2:
            (this->*funcs[2])();
        case 3:
            (this->*funcs[3])();
			break;
        default:
			std::cout << "それ以外";
	}
}

void Harl::debug()
{
    std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special ketchup burger. I really do!" << std::endl;
}

void Harl::info()
{
    std::cout << "I cannot believe adding extra bacon costs more money. You didn't put enough bacon in my burger! If you did, I wouldn't be asking for more!" << std::endl;
}

void Harl::warning()
{
    std::cout << "I think I deserve to have some extra bacon for free. I've been coming for years whereas you started working here since last month." << std::endl;
}

void Harl::error()
{
    std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

// C++では、メンバ関数には、呼び出されたオブジェクトに対する隠れたポインタ(thisポインタ)が自動的に渡されます。つまり、メンバ関数は、その関数が属するオブジェクトの状態を変更できるように、thisポインタを介してそのオブジェクトにアクセスできます。
// しかし、メンバ関数ポインタを単独で呼び出すと、どのオブジェクトに対してその関数が呼び出されるべきかが不明確になります。したがって、メンバ関数ポインタを使用して、メンバ関数を呼び出す場合、その関数が属するオブジェクトへのポインタを指定する必要があります。
// 一般的に、メンバ関数ポインタを使用して、オブジェクトのメンバ関数を呼び出すには、2つのステップが必要です。
// メンバ関数ポインタを使用して、呼び出すメンバ関数を選択します。
// 適切なオブジェクトへのポインタを使用して、選択されたメンバ関数を呼び出します。
// したがって、メンバ関数を呼び出す際には、そのメンバ関数が属するオブジェクトへのポインタを指定する必要があります。それに対して、通常の関数ポインタは、単独で関数を呼び出すことができるため、このような問題はありません。
