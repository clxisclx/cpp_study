#include <iostream>
using namespace std;

template <class T> void mySwap(T &a, T &b) {
  T temp = a;
  a = b;
  b = temp;
}

// 1.自动类型推导，必须推导出一致的数据类型T，才可以使用
void test01() {
  int a = 10;
  int b = 20;
  char c = 'c';

  mySwap(a, b); // 正确
  cout << "a = " << a << ", b = " << b << endl;
  //   mySwap(a, c); // 错误，类型不一致
  //   mySwap(a, 10); // 错误，类型不一致；10是临时值，不能绑定到非const引用(T&)
}

// 2.模板必须要确定出T的数据类型，才可以使用
template <class T> void func() { cout << "func<T>()" << endl; }

void test02() {
  //   func(); // 错误，编译器无法推导出T的类型
  func<int>(); // 正确，显示指定类型
}

int main() {
  test01();
  test02();
  return 0;
}