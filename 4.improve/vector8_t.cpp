#include <iostream>
#include <vector>
using namespace std;

// vector互换容器

void printVector(vector<int> &v) {
  for (vector<int>::iterator it = v.begin(); it != v.end(); it++) {
    cout << *it << " ";
  }
  cout << endl;
}

void test01() {
  vector<int> v1;
  for (int i = 0; i < 10; i++) {
    v1.push_back(i);
  }
}