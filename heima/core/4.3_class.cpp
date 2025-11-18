// this
// 形参和成员变量同名时，可用this来区分
// 非静态成员函数中返回对象本身，可使用return *this

#include <iostream>
using std::cout;
using std::endl;


class Person
{
    public:
    int age;

    Person(int age)
    {
        this->age = age;
    }

    Person& PersonAddPerson(Person p)
    {
        this->age += p.age;
        return *this;
    }
};

void test01(){
    Person p1(10);
    cout << "p1.age = " << p1.age << endl;

    Person p2(10);
    p2.PersonAddPerson(p1).PersonAddPerson(p1).PersonAddPerson(p1);
    cout << "p2.age = " << p2.age << endl;
}

int main(){
    test01();

    return 0;
}
