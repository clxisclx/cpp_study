#include<iostream>
using namespace std;

int main(){

    // 定义方式1：
    // 数组类型 数组名[元素个数]
    int score[10];
    score[0] = 100;
    score[1] = 90;
    score[2] = 80;

    cout << "score[0]: " << score[0] << endl;
    cout << "score[1]: " << score[1] << endl;
    cout << "score[2]: " << score[2] << endl;
    cout << "score[3]: " << score[3] << endl; // 未初始化，值不确定


    // 定义方式2:
    int score2[10] = {100,80,60};
    int length = sizeof(score2) / sizeof(score[0]);
    for (int i = 0; i < length ; i++)
    {   
        cout << "score2: " << score2[i] << endl;
    }


    // 定义方式3：
    int score3[] = {100, 90, 80, 70}; // 数组长度由初始化值决定
    int length2 = sizeof(score3) / sizeof(score3[0]);
    for (int i = 0; i < length2 ; i++)
    {   
        cout << "score3: " << score3[i] << endl;
    }
    

    return 0;
}