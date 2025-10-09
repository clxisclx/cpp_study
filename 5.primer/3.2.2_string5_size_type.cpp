#include <iostream>
using namespace std;

int main()
{
    string str = "hello";
    auto t = str.size();
    cout << typeid(t).name() << endl; // // g++ 可能打印 "m" 代表 size_t
    
    return 0;
}