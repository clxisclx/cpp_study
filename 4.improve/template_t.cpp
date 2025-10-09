#include <iostream>
using namespace std;

// 模板

// 函数模板
// 语法：
// template <typename T>
// 解释：
// 1. template关键字：告诉编译器这是一个模板
// 2. <typename T>：告诉编译器这是一个类型参数，T是一个占位符，表示任意类型

// 交换整形函数
void swapInt(int &a, int &b) {
  int temp = a;
  a = b;
  b = temp;
}

// 交换浮点型函数
void swapFloat(float &a, float &b) {
  float temp = a;
  a = b;
  b = temp;
}

// 利用模板提供通用的交换函数
template <typename T> void mySwap(T &a, T &b) {
  T temp = a;
  a = b;
  b = temp;
}

void test01() {
  int a = 10;
  int b = 20;

  // 利用模板实现交换
  // 1.自动类型推导
  mySwap(a, b);

  cout << "a = " << a << ", b = " << b << endl;

  // 2.显示指定类型
  float c = 10.5;
  float d = 20.5;
  mySwap<float>(c, d);
  cout << "c = " << c << ", d = " << d << endl;
}

int main() {
  test01();
  return 0;
}