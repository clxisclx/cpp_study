#include <iostream>
using namespace std;

// 常量引用

void showValue(const int &v) {
  // v += 10; // 错误：常量引用不能修改
  cout << "常量引用的值：" << v << endl;
}

int main() {

  // int& ref = 10; //
  // 错误：不能将常量绑定到非常量引用;引用本身需要一个合法的内存空间
  const int &ref =
      10; // 正确：常量引用可以绑定到常量；加入const,编译器优化代码，int
          // temp = 10; const int& ref = temp;

  // ref = 1000; // 错误：常量引用不能修改
  cout << ref << endl;

  // 函数中使用常量引用防止误操作
  int a = 10;
  showValue(a); // 正确：常量引用可以绑定到变量
}