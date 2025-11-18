// string拼接
#include <iostream>
#include <string>
using std::cout;
using std::endl;
using std::string;

void test01()
{
    string str1 = "我";
    str1 += "爱玩游戏";
    cout << "str1 = " << str1 << endl;

    str1 += ':';

    cout << "str1 = " << str1 << endl;
    
    string str2 = "LOL DNF";

    str1 += str2;

    cout << "str1 = " << str1 << endl;

    string str3 = "I";
    str3.append(" love ");
    str3.append("you !");
    str3.append(str2,4,3);
    cout << "str3 = " << str3 << endl;
}

int main    ()
{
    test01();

    return 0;
}