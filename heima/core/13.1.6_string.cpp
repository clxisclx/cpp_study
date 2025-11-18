// 字符串比较

#include <iostream>
#include <string>

using std::cout;
using std::endl;
using std::string;

void test01()
{
    string s1 = "hello";
    string s2 = "aello";

    int ret = s1.compare(s2);

    if(ret == 0){
        cout << "s1 等于 s2" << endl;
    }
    else if(ret > 0)
    {
        cout << "s1 大于 s2" << endl;
    } else 
    {
        cout << "s1 小于 s2" << endl;
    }

    string s3 = s1;
    s3 = "abcd";
    cout << "s3 = " << s3 << endl;
    cout << "s1 = " << s1 << endl;

}

int main()
{
    test01();

    return 0;
}