#include <iostream>
#include <cassert>

int main() {
    int a = 5;
    int b = 10;
    assert(a > b);  // 5 > 10，为 false，触发断言失败
    std::cout << "This will not be printed." << std::endl;
    return 0;
}
