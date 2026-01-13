#include<iostream>
using namespace std;

// 野指针

int main(){

    // 指针变量p指向内存地址编号为0x1100空间
    int * p = (int *)0X1100;

    // 访问野指针报错
    cout << *p << endl;

    return 0;
}