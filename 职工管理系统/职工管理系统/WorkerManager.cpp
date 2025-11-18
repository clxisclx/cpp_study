#include "WorkerManager.h"
#include "employee.h"
#include "manager.h"
#include "boss.h"

using std::cout;
using std::endl;
using std::cin;
using std::ofstream;
using std::ios;
using std::ifstream;

WorkerManager::WorkerManager()
{
    // 初始化人数
    this->m_EmpNum = 0;
    // 初始化数组指针
    this->m_EmpArray = NULL;
    // 初始化文件为空标志
    this->m_FileIsEmpty = true;
    // 根据职工数创建数组
    this->m_EmpArray = new Worker * [this->m_EmpNum];
    // 初始化职工
    init_Emp();
    //测试代码
    for (int i = 0; i < m_EmpNum; i++)
    {
        cout << "职工号： " << this->m_EmpArray[i]->m_Id
            << " 职工姓名： " << this->m_EmpArray[i]->m_Name
            << " 部门编号： " << this->m_EmpArray[i]->m_DeptId << endl;
    }

    ifstream ifs;
    ifs.open(FILENAME, ios::in);

    // 文件不存在情况
    if (!ifs.is_open())
    {
        cout << "文件不存在" << endl; 

        // 关闭文件
        ifs.close();
        return;
    }

    // 文件存在，并且没有记录
    char ch;
    ifs >> ch;
    if (ifs.eof())
    {
        cout << "文件为空！" << endl;
    }
    

}

WorkerManager::~WorkerManager()
{
    if (this->m_EmpArray != NULL)
    {
        delete[] this->m_EmpArray;
    }
}

void WorkerManager::Show_Menu()
{
    cout << "********************************************" << endl;
    cout << "*********  欢迎使用职工管理系统！ **********" << endl;
    cout << "*************  0.退出管理程序  *************" << endl;
    cout << "*************  1.增加职工信息  *************" << endl;
    cout << "*************  2.显示职工信息  *************" << endl;
    cout << "*************  3.删除离职职工  *************" << endl;
    cout << "*************  4.修改职工信息  *************" << endl;
    cout << "*************  5.查找职工信息  *************" << endl;
    cout << "*************  6.按照编号排序  *************" << endl;
    cout << "*************  7.清空所有文档  *************" << endl;
    cout << "********************************************" << endl;
    cout << endl;
}

void WorkerManager::exitSystem()
{
    cout << "欢迎下次使用" << endl;
    system("pause");
    exit(0);
}

void WorkerManager::Add_Emp()
{
    cout << "请输入增加职工的数量：" << endl;

    int addNum = 0;
	cin >> addNum;

    if (addNum > 0)
    {
        // 计算新空间大小
        int newSize = this->m_EmpNum + addNum;

        // 开辟新空间
        Worker** newSpace = new Worker * [newSize];

        // 将原空间下内容存放到新空间下
        if (this->m_EmpArray != NULL)
        {
            for (int i = 0; i < this->m_EmpNum; i++)
            {
                newSpace[i] = this->m_EmpArray[i];
            }
        }

        // 输入新数据
        for (int i = 0; i < addNum; i++)
        {
            int id;
            string name;
            int dSelect;

            cout << "请输入第 " << i + 1 << " 个新职工编号：" << endl;
            cin >> id;

            cout << "输入第 " << i + 1 << " 个新职工姓名：" << endl;
			cin >> name;

            cout << "请选择该职工的岗位：" << endl;
            cout << "1、普通职工" << endl;
            cout << "2、经理" << endl;
            cout << "3、老板" << endl;
            cin >> dSelect;

            Worker* worker = NULL;
            switch (dSelect)
            {
            case 1: //普通员工
                worker = new Employee(id, name, 1);
                break;
            case 2: //经理
                worker = new Manager(id, name, 2);
                break;
            case 3:  //老板
                worker = new Boss(id, name, 3);
                break;
            default:
                break;
            }

            newSpace[this->m_EmpNum + i] = worker;
        }

        // 释放原有空间
		delete[] this->m_EmpArray;

        // 更改新空间指向
        this->m_EmpArray = newSpace;

		// 更改新的职工人数
		this->m_EmpNum = newSize;

        // 提示信息
        cout << "成功添加" << addNum << "名新职工" << endl;

        // 保存文件
        this->save();

    } 
    else
    {
        cout << "输入有误" << endl;
    }

    system("pause");
    system("cls");

}

void WorkerManager::save()
{
    ofstream ofs;
    ofs.open(FILENAME, ios::out);

    for (int i = 0; i < this->m_EmpNum; i++)
    {
        ofs << this->m_EmpArray[i]->m_Id << " "
            << this->m_EmpArray[i]->m_Name << " "
            << this->m_EmpArray[i]->m_DeptId << endl;
    }

    ofs.close();
}

int WorkerManager::get_EmpNum()
{
    ifstream ifs;
    ifs.open(FILENAME, ios::in);

    int id;
    string name;
    int dId;

    int num = 0;
    while (ifs >> id && ifs >> name && ifs >> dId)
    {
        // 记录人数
        num++;
    }
    ifs.close();

    return num;
}

void WorkerManager::init_Emp()
{
    ifstream ifs;
    ifs.open(FILENAME, ios::in);

    int id;
    string name;
    int dId;

    int index = 0;
    while (ifs >> id && ifs >> name && ifs >> dId)
    {
        Worker* worker = NULL;
        if (dId == 1) // 普通员工
        {
            worker = new Employee(id, name, dId);
        }
        else if (dId == 2) // 经理
        {
            worker = new Manager(id, name, dId);
        }
        else // 老板
        {
            worker = new Boss(id, name, dId);
        }

        // 存放数组
        this->m_EmpArray[index] = worker;
        index++;
    }
}

