// const修饰成员函数
// 常函数：
// 成员函数后加const后称为常函数
// 常函数内不可以修改成员属性
// 成员属性声明时加关键字mutable后，在常函数中依然可以修改

// 常对象
// 声明对象前加const称该对象为常对象
// 常对象只能调用常函数

#include <iostream>
using std::cout;
using std::endl;

class Person{
    
    public:
    int m_A;
    mutable int m_B;

    Person(){
        m_A = 0;
        m_B = 0;
    }

    void ShowPerson() const {
        this->m_B = 100;
    }

    void MyFunc(){

    }
};

void  test01(){
    const Person person;
    cout << person.m_A << endl;
    person.m_B = 100;

    person.ShowPerson();
    // person.MyFunc();
}

int main(){
    test01();

    return 0;
}



