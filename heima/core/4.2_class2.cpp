#include <iostream>
using std::cout;
using std::endl;

class Person{
    public:
    // 无参默认构造函数
    Person(){
        cout << "无参构造函数" << endl;
    }
    // 有参
    Person(int a){
        age = a;
        cout << "有参构造函数" << endl;
    }
    // 拷贝构造函数
    Person(const Person& p){
        age = p.age;
        cout << "拷贝构造函数" << endl;
    }

    public:
    int age;
};

// 2.构造函数的调用
void test01(){
    Person p; // 调用无参构造函数
}

// 调用有参的构造函数
void test02(){
    // 方式一
    Person p1(10);

    // 方式二
    Person p2 = Person(10);
    Person p3 = Person(p2);

    // 方式三
    Person p4 = 10; // Person p4 = Person(10)
    Person p5 = p4; // Person p5 = Person(p4)

    // 注意：不能利用拷贝构造函数初始化匿名对象，编译器认为是对象声明
    // Person p5(p4);
};

int main(){
    // test01();
    test02();

    return 0;
}