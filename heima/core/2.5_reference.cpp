// 引用的本质在c++内部实现是一个指针常量

#include <iostream>

using std::cout;
using std::endl;

// 发现是引用，转换为 int* const ref = &a;
void func(int& ref)
{
    ref = 100; // ref是引用，转换为*ref=100
}

int main()
{
    int a = 100;

    // 自动转换为 int* const ref = &a;
    int &ref = a;
    ref = 20; // 内部发现ref是引用，自动转换为 *ref = 20;

    cout << "a:" << a << endl;
    cout << "ref:" << ref << endl;

    func(a);
    cout << "a:" << a << endl;
    cout << "ref:" << ref << endl;

    return 0;

}