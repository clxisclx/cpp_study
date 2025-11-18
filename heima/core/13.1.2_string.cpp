#include <iostream>
#include <string>

using std::cout;
using std::endl;
using std::string;

void test01()
{
    string s1;
    cout << "str1 = " << s1 << endl;

    const char *str = "hello world";
    string s2(str);
    cout << "str2 = " << s2 << endl;

    string s3(s2);
    cout << "str3 = " << s3 << endl;

    string s4(10,'a');
    cout << "str3 = " << s4 << endl;
    
}

int main()
{
    test01();

    return 0;
}