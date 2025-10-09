#include <iostream>
#include <string>
using namespace std;

// 查找
void test01() {
  string str1 = "abcdefgde";

  int pos = str1.find("de");

  if (pos == -1) {
    cout << "未找到" << endl;
  } else {
    cout << "pos = " << pos << endl;
  }

  pos = str1.rfind("de");
  cout << "pos = " << pos << endl;
}

// 替换
void test02() {
  string str1 = "abcdefgde";
  str1.replace(1, 3, "12345");
  cout << "str1 = " << str1 << endl;
}

// 比较
void test03() {
  string s1 = "hello";
  string s2 = "aello";

  int ret = s1.compare(s2);

  if(ret == 0)
}

int main() {
  test01();
  test02();
  return 0;
}