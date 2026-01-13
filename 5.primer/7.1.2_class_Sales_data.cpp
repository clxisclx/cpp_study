#include <iostream>

struct Sales_data {
    std::string isbn() const {return bookNo;}
    Sales_data& combine(const Sales_data&);
    double avg_price() const;

    Sales_data add(const Sales_data &lhs, const Sales_data &rhs) 
    {
        Sales_data sum = lhs; // 把lhs的数据成员拷贝给sum
        sum.combine(rhs);
        return sum;
    }

    std::string bookNo;
    unsigned units_sold = 0;
    double revenue = 0.0;
};
Sales_data add(const Sales_data&, const Sales_data&);
std::ostream &print(std::ostream&,const Sales_data&);
std::istream &read(std::istream&,Sales_data&);

// 在类外部定义成员函数
double Sales_data::avg_price() const {
    if(units_sold)
        return revenue/units_sold;
    else
        return 0;
}

// 定义一个返回this对象的函数
Sales_data& Sales_data::combine(const Sales_data &rhs){
    units_sold += rhs.units_sold;
    revenue += rhs.revenue;
    return *this;
}

// 输入的交易信息包括ISBN、售出总数和售出价格
std::istream &read(std::istream &is, Sales_data &item)
{
    double price = 0;
    is >> item.bookNo >> item.units_sold >> price;
    item.revenue = item.units_sold * price;
    return is;
}

std::ostream &print(std::ostream &os, const Sales_data &item)
{
    os << item.isbn() << " " << item.units_sold << " "
         << item.revenue << " " << item.avg_price();
     return os;
}

int main(void)
{

    return 0;
}