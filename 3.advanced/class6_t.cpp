#include <iostream>
using namespace std;

// 初始化列表

class Person {

public:
  //   // 传统方式初始化
  //   Person(int a, int b, int c) {
  //     m_A = a;
  //     m_B = b;
  //     m_C = c;
  //   }

  // 初始化列表
  Person(int a, int b, int c) : m_A(a), m_B(b), m_C(c) {
    cout << "Person的构造函数调用" << endl;
  }

  void showPerson() {
    cout << "m_A: " << m_A << " m_B: " << m_B << " m_C: " << m_C << endl;
  }

private:
  int m_A;
  int m_B;
  int m_C;
};

int main() {
  Person p(1, 2, 3);

  p.showPerson();
}