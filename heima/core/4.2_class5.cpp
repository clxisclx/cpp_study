// 类对象作为类成员

#include <iostream>
#include <string>
using std::cout;
using std::endl;
using std::string;

class Phone
{
    public:
    string m_PhoneName;

    Phone(string name)
    {
        m_PhoneName = name;
        cout << "Phone构造" << endl;
    }

    ~Phone()
    {
        cout << "Phone析构" << endl;
    }
};

class Person
{
    public:
    string m_Name;
    Phone m_Phone;

    Person(string name,string pName):m_Name(name),m_Phone(pName)
    {
        cout << "Person构造" << endl;
    }

    ~Person()
    {
        cout << "Person析构" << endl;
    }

    void playGame()
    {
        cout << m_Name << "使用" << m_Phone.m_PhoneName << "牌手机" << endl;
    }
};


