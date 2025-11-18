// 类做友元

#include <iostream>
#include <string>
using std::cout;
using std::endl;
using std::string;

class Building;
class goodGay{
    public:
    goodGay();
    void visit();

    private:
    Building *building;
};

class Building
{
    friend class goodGay; 
    
    public:
    string m_SittingRoom;
    private:
    string m_BedRoom;

    public:
    Building();
};
goodGay::goodGay()
{
    building = new Building;
}
Building::Building(){
    this->m_BedRoom = "卧室";
    this->m_SittingRoom = "客厅";
}

void goodGay::visit()
{
    cout << "好基友正在访问" << building->m_BedRoom << endl;
    cout << "好基友正在访问" << building->m_SittingRoom << endl;
}

void test01(){
    goodGay gg;
    gg.visit();
}

int main(){

    test01();

    return 0;
}