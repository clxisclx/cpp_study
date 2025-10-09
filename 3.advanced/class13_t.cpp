#include <iostream>
using namespace std;

// 友元
// 1. 友元函数
// 2. 友元类
// 3. 友元成员函数

// 全局函数做友元
class Building {
  // 告诉编译器，goodGay全局函数是Building类的好朋友，可以访问类中的私有内容
  friend void goodGay(Building *building);

public:
  Building() {
    this->m_SittingRoom = "客厅";
    this->m_BedRoom = "卧室";
  }

public:
  string m_SittingRoom; // 客厅

private:
  string m_BedRoom; // 卧室
};

void goodGay(Building *building) {
  cout << "好基友正在访问：" << building->m_SittingRoom << endl;
  cout << "好基友正在访问：" << building->m_BedRoom << endl;
}

void test01() {
  Building b;
  goodGay(&b);
}

int main() {
  test01();
  return 0;
}