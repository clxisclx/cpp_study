#include <iostream>
using namespace std;

int main()
{
    string str("some string");
    for(auto c : str)
        cout << c << endl;


    for(auto &c : str)
        c = toupper(c);

    cout << str << endl;

    return 0;
}