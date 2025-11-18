// string插入和删除

#include <iostream>
#include <string>
using std::cout;
using std::endl;
using std::string;

void test01()
{
    string str = "hello";
    str.insert(1,"1111");
    cout << str << endl;

    str.erase(1,3);
    cout << str << endl;
}

int main()
{
    test01();

    return 0;
}