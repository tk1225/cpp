#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon& w):name(name), weapon(w)
{
}

HumanA::~HumanA(){}

void HumanA::attack()
{
    std::cout << this->name << " attacks with their " << this->weapon.getType() << std::endl;
}

// 1
// 初期化子リストを使う方法

// Clock::Clock(int h, int m)
//     : hour(h), minute(m)    // 初期化子リスト
// {
// }

// 2
// メンバ変数のデフォルトコンストラクタを呼び出す
// メンバ変数に対し代入演算を行う (コンストラクタ本体の実行)
