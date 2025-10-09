#include <iostream>
using namespace std;

// 菱形继承
// 菱形继承是指一个类有两个父类，而这两个父类又有一个共同的父类
// 这种继承关系会导致二义性问题
// 解决方法：
// 1. 虚继承

class Animal {
public:
  int m_Age;
};

// 继承前加virtual关键字后，变为虚继承
// 此时公共的父类Animal称为虚基类
class Sheep : virtual public Animal {};
class Tuo : virtual public Animal {};
class SheepTuo : public Sheep, public Tuo {};

void test01() {
  SheepTuo st;
  st.Sheep::m_Age = 100; // 通过子类访问父类的成员变量
  st.Tuo::m_Age = 200;   // 通过子类访问父类的成员变量

  cout << "st.Sheep::m_Age = " << st.Sheep::m_Age << endl;
  cout << "st.Tuo::m_Age = " << st.Tuo::m_Age << endl;
  cout << "st.m_Age = " << st.m_Age << endl; // 通过子类访问父类的成员变量
}

int main() {
  test01();
  return 0;
}