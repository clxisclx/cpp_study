#include <iostream>
using namespace std;

// 类对象作为属性

// 当类中成员是其他类对象时，我们称该成员为 对象成员
// 构造的顺序是 ：先调用对象成员的构造，再调用本类构造
// 析构顺序与构造相反

class Phone {
public:
  Phone(string name) {
    m_PhoneName = name;
    cout << "Phone的构造函数调用" << endl;
  }

  ~Phone() { cout << "Phone的析构函数调用" << endl; }

  string m_PhoneName;
};

class Person {
public:
  string m_Name;
  Phone m_Phone;

  Person(string name, string pName) : m_Name(name), m_Phone(pName) {
    cout << "Person的构造函数调用" << endl;
  }
  ~Person() { cout << "Person的析构函数调用" << endl; }

  void playGame() {
    cout << m_Name << " 使用" << m_Phone.m_PhoneName << " 玩游戏" << endl;
  }
};

void test01() {
  Person p("小明", "苹果");
  p.playGame();
}

int main() {
  test01();
  return 0;
}