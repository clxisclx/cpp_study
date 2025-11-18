#pragma once
#include "Worker.h"
using std::string;

class Manager :
    public Worker
{
public:
    Manager(int id, string name, int dId);

    // 显示个人信息
    void showInfo() override;

    // 获取岗位名称
    string getDeptName() override;
};

