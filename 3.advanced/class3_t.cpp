#include <iostream>
using namespace std;

// 访问权限
// public: 类内可以访问，派生类可以访问，类外可以访问
// protected: 类内可以访问，派生类可以访问，类外不可以访问
// private: 类内可以访问，派生类不可以访问，类外不可以访问

class Base {
private:
  int secret = 42; // 只有Base类可以访问
public:
  void printSecret() {
    cout << secret << endl; // Base类可以访问
  }
};

class Derived : public Base {
public:
  void printSecret() {
    // cout << secret << endl; // 错误：Derived类不能访问Base类的私有成员
    cout << "Derived class cannot access Base class private member." << endl;
  }
};

int main() {
  Base b;
  b.printSecret(); // 输出：42

  Derived d;
  d.printSecret(); // 输出：Derived class cannot access Base class private
                   // member.
}