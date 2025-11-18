// 读文件
#include <iostream>
#include <fstream>
#include <string>

using std::cout;
using std::endl;
using std::string;
using std::ifstream;
using std::ios;
void test01(){
    ifstream ifs;
    ifs.open("test.txt",ios::in);

    if(!ifs.is_open())
    {
        cout << "文件打开失败" << endl;
        return;
    }

    // 第一种方式
    char buf[1024] = {0};
    while(ifs >> buf)
    {
        cout << buf << endl;
    }
}


int main(){
    test01();
    return 0;
}