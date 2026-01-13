#include <iostream>
#include <map>
using namespace std;

// map查找和统计

void test01() {
  map<int, int> m;
  m.insert(pair<int, int>(1, 10));
  m.insert(pair<int, int>(2, 20));
  m.insert(pair<int, int>(3, 30));

  // 查找
  map<int, int>::iterator it = m.find(31);
  if (it != m.end()) {
    cout << "key = " << it->first << " value = " << it->second << endl;
  } else {
    cout << "没有找到" << endl;
  }

  // 统计
  int num = m.count(2);
  if (num > 0) {
    cout << "key = 2 的元素存在" << endl;
  } else {
    cout << "key = 2 的元素不存在" << endl;
  }
}

int main() {
  test01();
  return 0;
}