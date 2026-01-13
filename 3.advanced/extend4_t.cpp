#include <iostream>
using namespace std;

// 多态实现计算器

class AbstractCalculator {
public:
  virtual int getResult() { return 0; }

  int m_Num1;
  int m_Num2;
};

// 加法
class AddCalculator : public AbstractCalculator {
public:
  int getResult() { return m_Num1 + m_Num2; }
};

// 减法
class SubCalculator : public AbstractCalculator {
public:
  int getResult() { return m_Num1 - m_Num2; }
};
// 乘法
class MulCalculator : public AbstractCalculator {
public:
  int getResult() { return m_Num1 * m_Num2; }
};

void test02() {
  // 创建加法计算器
  AbstractCalculator *abc = new AddCalculator;
  abc->m_Num1 = 10;
  abc->m_Num2 = 10;
  cout << abc->m_Num1 << " + " << abc->m_Num2 << " = " << abc->getResult()
       << endl;
  delete abc; // 用完了记得销毁

  // 创建减法计算器
  abc = new SubCalculator;
  abc->m_Num1 = 10;
  abc->m_Num2 = 10;
  cout << abc->m_Num1 << " - " << abc->m_Num2 << " = " << abc->getResult()
       << endl;
  delete abc;

  // 创建乘法计算器
  abc = new MulCalculator;
  abc->m_Num1 = 10;
  abc->m_Num2 = 10;
  cout << abc->m_Num1 << " * " << abc->m_Num2 << " = " << abc->getResult()
       << endl;
  delete abc;
}

int main() {

  // test01();

  test02();

  return 0;
}