#include<iostream>
using namespace std;

int main(){

    int a = 10;

    int * p;

    p = &a; // 取变量a的地址
    cout << "a的地址为：" << &a << endl;
    cout << "p为：" << p << endl;

    // 2.指针的使用
    cout << "*p = " << *p << endl;
    cout << "&a = " << &a << endl;

    // 3.指针的大小
    cout << "*p的大小：" << sizeof(p) << endl;
    cout << "char* 的大小：" << sizeof(char*) << endl;
    cout << "int* 的大小：" << sizeof(int*) << endl;
    cout << "float* 的大小：" << sizeof(float*) << endl;
    cout << "double* 的大小：" << sizeof(double*) << endl;


    return 0;
}