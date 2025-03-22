#include <iostream>

class Player {
public:
    std::string name;
    float health;

    Player(const std::string& n, float h) : name(n), health(h) {}

    void takeDamage(float dmg) {
        health -= dmg;
    }

    void printStatus() {
        std::cout << name << " has " << health << " HP.\n";
    }
};

// 一个隐藏的 Bug，错误地将生命值重置为 0
void mysteriousBug(Player& p) {
    p.health = 0.0f;
}

int main() {
    Player p("Hero", 100.0f);

    p.printStatus();

    // 模拟游戏逻辑
    p.takeDamage(10.0f);
    p.printStatus();

    // 一个意外的函数调用，搞砸了状态
    mysteriousBug(p);

    p.printStatus();

    return 0;
}
