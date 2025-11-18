// 通讯录管理系统.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include <string>

using std::string;
using std::cout;
using std::endl;
using std::cin;

#define MAX 1000 // 最大人数

// 联系人结构体
struct Person
{
    string m_Name; // 姓名
    int m_Sex; // 性别：1.男  2.女
    int m_Age; // 年龄
    string m_Phone; // 电话
    string m_Addr; // 住址
};

// 通讯录结构体
struct Addressbooks
{
    struct Person personArray[MAX]; // 通讯录中保存的联系人数组
    int m_Size; //通讯录中人员个数
};

// 菜单界面
void showMenu()
{
    cout << "***************************" << endl;
    cout << "*****  1、添加联系人  *****" << endl;
    cout << "*****  2、显示联系人  *****" << endl;
    cout << "*****  3、删除联系人  *****" << endl;
    cout << "*****  4、查找联系人  *****" << endl;
    cout << "*****  5、修改联系人  *****" << endl;
    cout << "*****  6、清空联系人  *****" << endl;
    cout << "*****  0、退出通讯录  *****" << endl;
    cout << "***************************" << endl;
}

// 1.添加联系人
void addPerson(Addressbooks* abs)
{
    // 判断电话本是否满了
    if (abs->m_Size == MAX)
    {
        cout << "通讯录已满，无法添加" << endl;
        return;
    }
    else
    {
        // 姓名
        string name;
        cout << "请输入姓名：" << endl;
        cin >> name;
        abs->personArray[abs->m_Size].m_Name = name;

        // 性别
        int sex = 0; 
        cout << "请输入性别（1.男，2.女）：" << endl;
        while (true)
        {
            cin >> sex;
            if (sex == 1 || sex == 2)
            {
                abs->personArray[abs->m_Size].m_Sex = sex;
                break;
            }
            cout << "输入有误，请重新输入" << endl;
        }

        // 年龄
        cout << "请输入年龄：" << endl;
        int age = 0;
        cin >> age;
        abs->personArray[abs->m_Size].m_Age = age;

        // 联系电话
        cout << "请输入联系电话：" << endl;
        string phone = "";
        cin >> phone;
        abs->personArray[abs->m_Size].m_Phone = phone;

        // 家庭住址
        cout << "请输入家庭地址：" << endl;
        string address;
        cin >> address;
        abs->personArray[abs->m_Size].m_Addr = address;

        // 更新通讯录人数
        abs->m_Size++;

        cout << "添加成功" << endl;
        system("pause");
        system("cls");
    }
}

// 2.显示所有联系人信息
void showPerson(Addressbooks* abs)
{
    if (abs->m_Size == 0)
    {
        cout << "当前记录为空" << endl;
    } 
    else
    {
        for (int i = 0, size = abs->m_Size; i < size; i++)
        {
            cout << "姓名：" << abs->personArray[i].m_Name << "\t";
            cout << "性别：" << (abs->personArray[i].m_Sex == 1 ? "男" : "女") << "\t";
            cout << "年龄：" << abs->personArray[i].m_Age << "\t";
            cout << "电话：" << abs->personArray[i].m_Phone << "\t";
            cout << "住址：" << abs->personArray[i].m_Addr << endl;
        }
    }

    system("pause");
    system("cls");
}

// 3.判断是否存在查询的人员，存在返回数组索引，不存在返回-1
int isExist(Addressbooks* abs, string name)
{
    for (int i = 0,size = abs->m_Size; i < size; i++)
    {
        if (abs->personArray[i].m_Name == name) 
        {
            return i;
        }
    }

    return -1;
}

// 3.删除指定联系人信息
void deletePerson(Addressbooks* abs)
{
    cout << "请输入您要删除的联系人" << endl;
    string name;
    cin >> name;

    int ret = isExist(abs, name);
    if (ret != -1)
    {
        for (int i = ret,size = abs->m_Size; i < size; i++)
        {
            abs->personArray[i] = abs->personArray[i + 1];
        }
        abs->m_Size--;
        cout << "删除成功" << endl;
    }
    else
    {
        cout << "查无此人" << endl;
    }

    system("pause");
    system("cls");
}

int main()
{
    // 创建通讯录
    Addressbooks abs;
    // 初始化通讯录中人数
    abs.m_Size = 0;

    int select = 0;

    while (1)
    {
        showMenu();

        cin >> select;
        switch (select)
        {
        case 1: // 添加联系人
            addPerson(&abs);
            break;
        case 2: // 显示联系人
            showPerson(&abs);
            break;
        case 3: // 删除联系人
            break;
        case 4: // 查找联系人
            break;
        case 5: // 修改联系人
            break;
        case 6: // 清空联系人
            break;
        case 0: // 退出通讯录
            cout << "欢迎下次使用" << endl;
            system("pause");
            return 0;
            break;
        default:
            break;
        }
    }
    return 0;
}

// 运行程序: Ctrl + F5 或调试 >“开始执行(不调试)”菜单
// 调试程序: F5 或调试 >“开始调试”菜单

// 入门使用技巧: 
//   1. 使用解决方案资源管理器窗口添加/管理文件
//   2. 使用团队资源管理器窗口连接到源代码管理
//   3. 使用输出窗口查看生成输出和其他消息
//   4. 使用错误列表窗口查看错误
//   5. 转到“项目”>“添加新项”以创建新的代码文件，或转到“项目”>“添加现有项”以将现有代码文件添加到项目
//   6. 将来，若要再次打开此项目，请转到“文件”>“打开”>“项目”并选择 .sln 文件
