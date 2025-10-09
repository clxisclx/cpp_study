#include <iostream>
#include <string>
using namespace std;

// 类模板对象做函数参数

template <class NameType, class AgeType = int> class Person {
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