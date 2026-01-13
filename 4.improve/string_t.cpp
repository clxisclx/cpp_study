#include <iostream>
#include <string>
using namespace std;

// string
// string()
// string(const char *str)
// string(const string &str)
// string(size_t n, char c)

void test01() {
  string str1;
  cout << "str1 = " << str1 << endl;

  const char *str2 = "hello world";
  string str3(str2);
  cout << "str3 = " << str3 << endl;

  string s3(str3);
  cout << "s3 = " << s3 << endl;

  string s4(10, 'a');
  cout << "s4 = " << s4 << endl;
}

int main() {
  test01();
  return 0;
}