#include<iostream>
using namespace std;

// 不要返回局部变量的地址
// 局部变量在函数结束后会被销毁，返回局部变量的地址会导致野指针
// 访问野指针会导致程序崩溃
int * func(){
    int a = 10;
    return &a;
}

// 返回堆区变量的地址
// 在堆区申请内存，返回堆区变量的地址是安全的
// 但是需要手动释放内存，否则会导致内存泄漏
int* func2(){
    int * p = new int(10); // 在堆区申请内存
    return p;
}

int main(){

    int *p = func();

    cout << *p << endl;
    cout << *p << endl;

    int *b = func2();
    cout << *b << endl;
    cout << *b << endl;
    delete b; // 释放内存
}