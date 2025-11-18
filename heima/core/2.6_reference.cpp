// 常量引用
// 主要用来修饰形参，防止误操作

#include <iostream>
using std::cout;
using std::endl;

void showValue(const int& v)
{
    cout << v << endl;
}

int main()
{
    // int& ref = 10; 非法。引用本身需要一个合法的内存空间
    // 加入const就可以，编译器优化代码，int temp = 19; const int& ref = temp;
    const int& ref = 10;

    // ref = 100; 非法
    cout << ref << endl;

    int a = 10;
    showValue(a);

    return 0;
}