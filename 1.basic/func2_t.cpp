#include<iostream>
using namespace std;

// 函数重载满足条件：
// 1.同一个作用域
// 2.函数名相同
// 3.参数列表不同，包括参数个数、参数类型、参数顺序
// 4.返回值类型不同不算重载

void func(){
    cout << "无参数函数" << endl;
}

void func(int a){
    cout << "有参数函数" << endl;
}

void func(int a, int b){
    cout << "有两个参数函数" << endl;
}

void func(double a){
    cout << "有一个double参数函数" << endl;
}
void func(int a, double b){
    cout << "有一个int参数和一个double参数函数" << endl;
}

// 引用作为重载条件
void func2(int &a){
    cout << "引用参数函数" << endl;
}
void func2(const int &a){
    cout << "常量引用参数函数" << endl;
}

// 函数重载碰到函数默认参数
void func3(int a,int b = 10){
    cout << "func3(int a,int b = 10)" << endl;
}

void func3(int a){
    cout << "func3(int a)" << endl;
}

int main(){
    func(); // 无参数函数
    func(10); // 有参数函数
    func(10, 20); // 有两个参数函数
    func(10.0); // 有一个double参数函数
    func(10, 20.0); // 有一个int参数和一个double参数函数

    int a = 10;
    func2(a); // 引用参数函数
    func2(20); // 常量引用参数函数

    // func3(10); // 有歧义，报错

    return 0;
}