#include<iostream>
using namespace std;

// 1.值传递
void mySwap01(int a,int b){
    int temp = a;
    a = b;
    b = temp;
}

// 地址传递
void mySwap02(int *a,int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

// 引用传递
void mySwap03(int &a,int &b){
    int temp = a;
    a = b;
    b = temp;
}

int main(){

    int a = 10;
    int b = 20;

    mySwap01(a,b);
    cout << "mySwap01交换后 a = " << a << " b = " << b << endl;

    mySwap02(&a,&b);
    cout << "mySwap02交换后 a = " << a << " b = " << b << endl;

    mySwap03(a,b);
    cout << "mySwap03交换后 a = " << a << " b = " << b << endl;
}