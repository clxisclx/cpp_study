#include<iostream>
using namespace std;

// 结构体定义
struct student{
    string name; // 姓名
    int age; // 年龄
    int score; // 分数
};

int main(){

    student stu1 = {"张三",18,100} // 结构体变量创建方式1
    struct student * p = &stu;
    p->score = 80;
    cout << "姓名：" << p->name << " 年龄：" << p->age << " 分数：" << p->score << endl;
}