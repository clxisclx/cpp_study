#include <iostream>
using namespace std;

int main()
{
    string line;
    while(getline(cin,line))
    {
        // 每次读入一整行，遇到空行直接跳过
        if(!line.empty())
            cout << line.size() << endl; // 输出每行字符数
        
        
        if(line ==  "q")
            break;
    }

    string str = "";
    cout << str.empty() << endl; // 输出1，表示为空
    cout << str[0] << endl; // 输出空行，表示str确实为空
    cout << str[1] << endl; // 输出空行，表示str确实为空

    string str2 = " ";
    cout << str2.empty() << endl; // 输出0，表示非空


    return 0;
}