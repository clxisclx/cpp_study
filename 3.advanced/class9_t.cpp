#include <iostream>
using namespace std;

// 静态成员函数特点
// 1. 程序共享一个函数
// 2. 静态成员函数只能访问静态成员变量和静态成员函数

class Person {
public:
  static int m_A;
  int m_B;

  static void func() {
    cout << "func()调用" << endl;
    m_A = 100;
    // m_B = 200; // 静态成员函数不能访问非静态成员变量
  }

private:
  // 静态成员函数也是有访问权限的
  static void func2() { cout << "func2()调用" << endl; }
};

int Person::m_A = 10;

void test01() {

  // 静态成员变量访问方式

  // 1.通过对象
  Person p1;
  p1.func();

  // 2.通过类名
  Person::func();
}

int main() {
  test01();
  return 0;
}
