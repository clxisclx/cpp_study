// string字符存取
#include <iostream>
#include <string>

using std::cout;
using std::endl;
using std::string;

void test01()
{
    string str = "hello world";

    for(int i = 0; i < str.size(); i++)
    {
        cout << str[i]<< " ";
    }
    cout << endl;

    for(int i = 0; i < str.size(); i++)
    {
        cout << str.at(i) << " ";
    }
    cout << endl;

    // 字符修改
    str[0] = 'x';
    str.at(1) = 'y';
    cout << str << endl;
}

int main()
{
    test01();

    return 0;
}