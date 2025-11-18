#pragma once
#include <iostream>
#include <fstream>
#include "worker.h"

#define FILENAME "empFile.txt"
class WorkerManager
{
public:
	// 构造函数
	WorkerManager();

	// 展示菜单
	void Show_Menu();

	// 退出菜单
	void exitSystem();

	//增加职工
	void Add_Emp();

	// 保存文件
	void save();

	// 统计人数
	int get_EmpNum();

	// 初始化员工
	void init_Emp();

	// 析构函数
	~WorkerManager();

public:
	// 记录文件中的人数个数
	int m_EmpNum;
	// 员工数组的指针
	Worker** m_EmpArray;
	// 文件是否为空标志
	bool m_FileIsEmpty;
};

