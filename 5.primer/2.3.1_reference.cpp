#include <iostream>
using namespace std;

int main()
{
    int ival = 1024;
    int &refVal = ival;
    cout << "ival = " << ival << ", refVal = " << refVal << endl; // ival = 1024, refVal = 1024

    refVal = 2;
    cout << "ival = " << ival << ", refVal = " << refVal << endl; // ival = 2, refVal = 2

    int &refVal3 = refVal;
    refVal3 = 3;
    cout << "ival = " << ival << ", refVal = " << refVal << ", refVal3 = " << refVal3 << endl; // ival = 3, refVal = 3, refVal3 = 3

    // int &refVal4 = 10; // 错误，引用类型的初始值必须是一个对象
    return 0;
}