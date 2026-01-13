#include <iostream>
using namespace std;

class Student {
public:
  string m_name;
  int m_id;

public:
  void setName(string name) { m_name = name; }
  void setID(int id) { m_id = id; }

  void showStudent() {
    cout << "name : " << m_name << " id : " << m_id << endl;
  }
};

int main() {
  Student stu;
  stu.setName("jack");
  stu.setID(1001);
  stu.showStudent();
}