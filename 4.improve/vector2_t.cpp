#include <iostream>
#include <string>
#include <vector>
using namespace std;

// 自定义数据类型
class Person {
public:
  Person(string name, int age) {
    this->mName = name;
    this->mAge = age;
  }

public:
  string mName;
  int mAge;
};

void test01() {
  vector<Person> v;

  // 创建数据
  Person p1("aaa", 10);
  Person p2("bbb", 20);
  Person p3("ccc", 30);

  v.push_back(p1);
  v.push_back(p2);
  v.push_back(p3);

  for (vector<Person>::iterator it = v.begin(); it != v.end(); it++) {
    cout << "Name:" << it->mName << " Age:" << it->mAge << endl;
  }
}

// 存放对象指针
void test02() {

  vector<Person *> v;

  // 创建数据
  Person p1("aaa", 10);
  Person p2("bbb", 20);
  Person p3("ccc", 30);

  v.push_back(&p1);
  v.push_back(&p2);
  v.push_back(&p3);
  for (vector<Person *>::iterator it = v.begin(); it != v.end(); it++) {
    cout << "Name:" << (*it)->mName << " Age:" << (*it)->mAge << endl;
  }
}

int main() {
  test01();
  test02();
  return 0;
}