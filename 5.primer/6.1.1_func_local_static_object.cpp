#include <iostream>
using namespace std;

int count_call(void)
{
    static int ctr = 0;
    return ++ctr;
}

int main(void)
{
    for(int i = 0;i< 10;i++)
    {
        cout << count_call() << endl;
    }

    return 0;
}