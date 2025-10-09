#include <iostream>
#include <vector>
using namespace std;

// vector插入和删除

void printVector(vector<int> &v) {
  for (vector<int>::iterator it = v.begin(); it != v.end(); it++) {
    cout << *it << " ";
  }
  cout << endl;
}

// 插入和删除
void test01() {

  vector<int> v1;
  // 尾插
  v1.push_back(10);
  v1.push_back(20);
  v1.push_back(30);
  v1.push_back(40);
  printVector(v1);

  v1.pop_back(); // 删除最后一个元素
  printVector(v1);

  v1.insert(v1.begin(), 100); // 在第一个位置插入100
  printVector(v1);

  v1.insert(v1.begin(), 2, 1000); // 在第一个位置插入2个1000
  printVector(v1);

  // 删除
  v1.erase(v1.begin()); // 删除第一个元素
  printVector(v1);

  // 清空
  v1.erase(v1.begin(), v1.end()); // 删除第一个到最后一个元素
  printVector(v1);
  v1.clear(); // 清空
  printVector(v1);
}

int main() {
  test01();
  return 0;
}