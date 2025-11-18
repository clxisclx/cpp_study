// 字符串查找和替换

#include <iostream>
#include <string>

using std::cout;
using std::endl;
using std::string;

void test01()
{
    // 查找
    string str1 = "abcdefgde";
    int pos = str1.find("de");

    if(pos == -1)
    {
        cout << "未找到" << endl;
    } 
    else
    {
        cout << "pos = " << pos << endl;
    } 

    pos = str1.rfind("de");
    cout << "pos = " << pos << endl;

}

void test02()
{
    string str1 = "abcdefgde";
    str1.replace(1,3,"1111111");

    cout << "str1 = " << str1 << endl;
}

int main()
{
    // test01();

    test02();

    return 0;
}