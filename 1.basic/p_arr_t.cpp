#include<iostream>
using namespace std;

// 指针数组

int main(){
    
    int arr[] = {1,2,3,4,5};
    // arr会自动退化为指向首元素的指针
    // int * arr = &arr[0]; // 也可以这样写
    // 不能这样写 &arr,因为&arr是指向整个数组的指针不是int*而是int (*)[5]
    int * p = arr; // 指针指向数组，
    cout << "第一个元素：" << arr[0] << endl;
    cout << "指针访问第一个元素：" << *p << endl;


    for(int i = 0; i < 10; i++){
        cout << "指针访问第" << i + 1 << "个元素：" << *(p + i) << endl;
    }









    int (*p1)[5] = &arr;  // ✅ 正确：p1 是一个指向 int[5] 的指针
    cout << "指针访问第一个元素：" << (*p1)[0] << endl;





}