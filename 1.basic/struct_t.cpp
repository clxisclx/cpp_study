#include<iostream>
using namespace std;

struct student{

    string name; // 姓名
    int age; // 年龄
    int score; // 分数
}stu3; // 结构体声明变量方式3

int main(){

    // 结构体变量创建方式1
    struct student stu1; // 关键字struct可以省略
    stu1.name = "张三";
    stu1.age = 20;
    stu1.score = 90;
    cout << "姓名：" << stu1.name << " 年龄：" << stu1.age << " 分数：" << stu1.score << endl;


    // 结构体变量创建方式2
    student stu2 = {"李四",19,100};
    cout << "姓名：" << stu2.name << " 年龄：" << stu2.age << " 分数：" << stu2.score << endl;
}