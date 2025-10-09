#include <iostream>
using namespace std;

const double PI = 3.14;

class Circle {
public:
  // 属性
  int m_r; // 半径

  // 方法
  // 计算面积
  double calcArea() { return PI * m_r * m_r; }
  // 计算周长
  double calcPerimeter() { return 2 * PI * m_r; }
}

int main() {
  Circle c1; // 创建对象
  cout << c1.calcPerimeter() << endl;
}