#include <iostream>
#include <string>
using namespace std;

// 类模板
template <class NameType, class AgeType> class Person {
public:
  Person(NameType name, AgeType age) {
    this->mName = name;
    this->mAge = age;
  }

  void showPerson() {
    cout << "name: " << this->mName << " age: " << this->mAge << endl;
  }

public:
  NameType mName;
  AgeType mAge;
};

void test01() {
  Person<string, int> p1("孙悟空", 999);
  p1.showPerson();
}

int main() {
  test01();
  return 0;
}
