// 运算符重载
#include <iostream>
using std::cout;
using std::endl;

class Person{
    public:
    int m_A;
    int m_B;

    Person(){};

    Person(int a,int b): m_A(a),m_B(b){}

    // 成员函数实现+号运算符重载
    Person operator+(const Person &p)
    {
        Person temp;
        temp.m_A = this->m_A + p.m_A;
        temp.m_B = this->m_B + p.m_B;
        return temp;
    }
};

Person operator+(const Person& p2,int val)
{
    Person temp;
    temp.m_A = temp.m_A + val;
    temp.m_B = temp.m_B + val;
    return temp;
}

int test(){
    Person p1(10,10);
    Person p2(20,20);

    // 成员函数方式
    Person p3 = p2 + p1; // 相当于p2.operator+(p1)
    cout << "mA:" << p3.m_A << "  mB:" << p3.m_B << endl;

    Person p4 = p3 + 10; // 相当于 operaor+(p3,10)
    cout << "mA:" << p4.m_A << " mB:" << p4.m_B << endl;

}

int main() {

    test();

    system("pause");

    return 0;
}