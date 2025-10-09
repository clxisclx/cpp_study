#include<iostream>
using namespace std;

// 引用不是指针
// 引用是一个别名，引用和变量共享同一块内存
// 引用是一个常量指针，引用一旦绑定到一个变量，就不能再绑定到其他变量
// 引用的内存地址和变量的内存地址是一样的
// 引用的大小和指针的大小是一样的
// 引用的内存地址和变量的内存地址是一样的
// 语法：
// 数据类型 & 引用名 = 变量名;
int main(){

    int a = 10;
    int &b = a;

    cout << "a = " << a << endl;
    cout << "b = " << b << endl;

    b = 100;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
}