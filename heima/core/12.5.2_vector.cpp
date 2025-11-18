#include <iostream>
#include <vector>
#include <string>

using std::cout;
using std::endl;
using std::string;
using std::vector;

class Person
{
    public:
    string mName;
    int mAge;

    Person(string name,int age){
        mName = name;
        mAge = age;
    }
};

void test01()
{
    vector<Person> v;

    //创建数据
    Person p1("aaa", 10);
    Person p2("bbb", 20);
    Person p3("ccc", 30);
    Person p4("ddd", 40);
    Person p5("eee", 50);

    v.push_back(p1);
    v.push_back(p2);
    v.push_back(p3);
    v.push_back(p4);
    v.push_back(p5);

    for(vector<Person>::iterator it = v.begin(); it != v.end();it++)
    {
        cout << "Name:" << (*it).mName << "Age:" << (*it).mAge << endl;
    }
}

void test02()
{
    vector<Person*> v;

    //创建数据
    Person p1("aaa", 10);
    Person p2("bbb", 20);
    Person p3("ccc", 30);
    Person p4("ddd", 40);
    Person p5("eee", 50);

    v.push_back(&p1);
    v.push_back(&p2);
    v.push_back(&p3);
    v.push_back(&p4);
    v.push_back(&p5);

    for(vector<Person*>::iterator it = v.begin();it != v.end();it++)
    {
        Person *p = (*it);
        cout << "Name:" << p->mName << " Age:" << (*it)->mAge << endl;
    }
}

int main()
{
    test01();

    test02();

    return 0;
}