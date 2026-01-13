#include <iostream>
using namespace std;

int main()
{
    const int ci = 0, &cj = ci;
    decltype(ci) x = 0; // x是const int类型
    decltype(cj) y = x; // y是const int&类型
    // decltype(cj) z; // 错误，引用类型必须初始化

    return 0;
}