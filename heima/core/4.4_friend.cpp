// 全局函数做友元

#include <iostream>
#include <string>
using std::cout;
using std::endl;
using std::string;

class Building
{
    // 告诉编译器goodGay全局函数 是Building类的好朋友，可以访问类的私有内容
    friend void goodGay(Building * building);
public:
    string m_SittingRoom;

private:
    string m_BedRoom;

public:
    Building()
    {
        this->m_SittingRoom = "客厅";
        this->m_BedRoom = "卧室";
    }
};

void goodGay(Building *building)
{
    cout << "好基友正在访问：" << building->m_SittingRoom << endl;
    cout << "好基友正在访问：" << building->m_BedRoom << endl;
}

void test01()
{
    Building b;
    goodGay(&b);
}

int main()
{
    test01();
    return 0;
}