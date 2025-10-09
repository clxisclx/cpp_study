#include <iostream>
using namespace std;

class Person {
public:
  int mAge;

public:
  Person() {
    cout << "无参构造函数" << endl;
    mAge = 0;
  }

  Person(int age) {
    cout << "有参构造函数" << endl;
    mAge = age;
  }

  // 拷贝构造函数
  // 如果没有定义拷贝构造函数，编译器会提供一个默认的拷贝构造函数
  // 默认的拷贝构造函数是逐个成员进行拷贝
  Person(const Person &p) {
    cout << "拷贝构造函数" << endl;
    mAge = p.mAge;
  }

  ~Person() { cout << "析构函数" << endl; }
};

void test01() {

  Person man(100);      // 调用有参构造函数
  Person newman(man);   // 调用拷贝构造函数
  Person newman2 = man; // 拷贝构造函数
}

int main() {
  test01();
  return 0;
}