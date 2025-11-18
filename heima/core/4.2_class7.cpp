// 静态成员函数
// 静态成员函数只能访问静态成员变量
#include <iostream>
using std::cout;
using std::endl;


class Person
{
    public:

    static int m_A;
    int m_B;
    static void func()
    {
        cout << "func调用" << endl;
        m_A = 100;
    }
    
    private:
    static void func2(){
        cout << "func2调用" << endl;
    }
};

int Person::m_A = 10;

void test01(){
    // 两种访问方式
    // 1.通过对象
    Person p1;
    p1.func();

    // 2.通过类名
    Person::func();
}

int main()
{
    test01();

    return 0;
}



