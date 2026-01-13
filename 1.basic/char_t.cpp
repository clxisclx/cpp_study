#include<iostream>
using namespace std;

int main(){
    char ch = 'a';
    cout << ch << endl;
    cout << sizeof(char) << endl;

    cout << (int)ch << endl; // 查看a字符对应的ascii码
    ch = 99; // ascii码
    cout << ch << endl;

    return 0;
}