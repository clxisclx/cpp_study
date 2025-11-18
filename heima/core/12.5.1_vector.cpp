// 存放自定义数据
#include <iostream>
#include <vector>
#include <algorithm>
using std::cout;
using std::endl;
using std::vector;

void MyPrint(int val)
{
    cout << val << endl;
}

void test01(){
    
    vector<int> v;
    v.push_back(10);
    v.push_back(20);
    v.push_back(30);
    v.push_back(40);

    vector<int>::iterator pBegin = v.begin();
    vector<int>::iterator pEnd = v.end();

    // 方式一
    // while (pBegin != pEnd)
    // {
    //     cout << *pBegin <<  endl;
    //     pBegin++;
    // }

    // 方式二
    for(vector<int>::iterator it = v.begin();it != v.end();it++)
    {
        cout << *it << endl;
    }
    cout << endl;

    // 方式三
    //使用STL提供标准遍历算法  头文件 algorithm
    // for_each(v.begin(),v.end(),MyPrint);
    
}

int main()
{
    test01();

    return 0;
}

