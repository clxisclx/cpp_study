#include <iostream>
using namespace std;

// 加号重载

// 实现两个自定义数据类型相加的运算

class Person {
public:
  Person() {};
  Person(int a, int b) {
    this->m_A = a;
    this->m_B = b;
  }
  // 成员函数实现 + 号运算符重载
  Person operator+(const Person &p) {
    Person temp;
    temp.m_A = this->m_A + p.m_A;
    temp.m_B = this->m_B + p.m_B;
    return temp;
  }

public:
  int m_A;
  int m_B;
};

// 全局函数实现 + 号运算符重载
Person operator+(const Person &p2, int val) {
  Person temp;
  temp.m_A = p2.m_A + val;
  temp.m_B = p2.m_B + val;
  return temp;
}

void test01() {
  Person p1(10, 20);
  Person p2(20, 20);

  // 成员函数方式
  Person p3 = p2 + p1; // //相当于 p2.operaor+(p1)
  cout << "p3.m_A = " << p3.m_A << endl;

  Person p4 = p3 + 10; // 相当于 operator+(p3,10)
  cout << "p4.m_A = " << p4.m_A << endl;
}

int main() {
  test01();
  return 0;
}