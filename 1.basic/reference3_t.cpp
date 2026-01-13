#include<iostream>
using namespace std;

// 返回局部变量的引用
int& test01(){
    int a = 10;
    return a; // 返回局部变量的引用
}

// 返回静态变量的引用
int& test02(){
    static int a = 10; // 静态变量
    return a; // 返回静态变量的引用
}

int main(){

    // 不能返回局部变量的引用
    int& ref = test01(); // 返回局部变量的引用
    cout << "局部变量的引用：" << ref << endl; // 引用的值是未定义的
    cout << "局部变量的引用：" << ref << endl; // 引用的值是未定义的
    cout << "局部变量的引用：" << &ref << endl; // 引用的地址是未定义的

    // 如果函数做左值，那么必须返回引用
    int& ref2 = test02();
    cout << "ref2 = " << ref2 << endl;
    cout << "ref2 = " << ref2 << endl;

    test02() = 1000;
    cout << "ref2 = " << ref2 << endl; // 引用的值是1000
    cout << "局部变量的引用：" << &ref2 << endl; // 引用的地址是未定义的
    cout << "局部变量的引用：" << &test02() << endl; // 引用的地址是未定义的
    cout << "局部变量的引用：" << test02() << endl; // 引用的值是1000

}