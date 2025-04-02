#include <iostream>
#include <cassert>

int divide(int a, int b) {
    assert(b != 0 && "除数不能为0！");
    return a / b;
}

int main() {
    std::cout << "程序开始运行..." << std::endl;

    int x = 10;
    int y = 0;

    std::cout << "即将执行除法操作：" << x << " / " << y << std::endl;

    int result = divide(x, y); // 这里会触发 assert (Debug 模式)

    std::cout << "结果是: " << result << std::endl;

    return 0;
}
