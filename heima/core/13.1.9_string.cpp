// string 子字符串

#include <iostream>
#include <string>

using std::cout;
using std::endl;
using std::string;

void test01()
{
    string str = "abcdefg";
    string subStr = str.substr(1,3);
    cout << "subStr = " << subStr << endl;

    string email = "hello@sina.com";
    int pos = email.find("@");
    cout << "pos: " << pos << endl;
    string username = email.substr(0,pos);
    cout << "username: " << username << endl;
}

int main()
{
    test01();

    return 0;
}