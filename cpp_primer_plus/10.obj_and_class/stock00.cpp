#include <iostream>
#include "stock00.h"
#include <iomanip>

Stock00::Stock::Stock()
{
    company = "no name";
    shares = 0;
    share_val = 0.0;
    total_val = 0.0;
}
Stock00::Stock::Stock(const std::string &co, long n, double pr)
{
    company = co;
    if (n < 0)
    {
        std::cout << "Number of shares can't be negative;"
                  << company << " shares set to 0. \n";
        shares = 0;
    }
    else
        shares = n;
    share_val = n;
    set_tot();
}

Stock00::Stock::~Stock() 
{
    std::cout << "Bye," << company << "!\n";
}
void Stock00::Stock::acquire(const std::string &co, long n, double pr)
{
    company = co;
    if (n < 0)
    {
        std::cout << "Number of shares can't be negative;"
                  << company << " shares set to 0. \n";
        shares = 0;
    }
    else
        shares = n;
    share_val = n;
    set_tot();
}

void Stock00::Stock::buy(long num, double price)
{
    if (num < 0)
    {
        std::cout << "Number of shares purchased can't be negative."
                  << "Transaction is aborted.\n";
    }
    else
    {
        shares += num;
        share_val = price;
        set_tot();
    }
}

void Stock00::Stock::sell(long num, double price)
{
    using std::cout;
    if (num < 0)
    {
        cout << "Number of shares sold can't be negative."
             << "Transaction is aborted.\n";
    }
    else if (num > shares)
    {
        cout << "You can't sell more than you have!"
             << "Transaction is aborted.\n";
    }
    else
    {
        shares -= num;
        share_val = price;
        set_tot();
    }
}

void Stock00::Stock::update(double price)
{
    share_val = price;
    set_tot();
}

// void Stock::show()
// {
//     using std::cout;
//     using std::ios_base;
//     // set format to #.###
//     ios_base::fmtflags orig = cout.setf(ios_base::fixed, ios_base::floatfield);
//     std::streamsize prec = cout.precision(3);
//     std::cout << "Company: " << company
//               << " Shares: " << shares << '\n'
//               << " Share Price: $" << share_val;

//     // set format to #.##
//     cout.precision(2);
//     cout << " Total Worth: $" << total_val << '\n';

//     // restore origninal format
//     cout.setf(orig,ios_base::floatfield);
//     cout.precision(prec);
// }
// 现代c++写法
void Stock00::Stock::show()
{
    std::cout << "Company: " << company
              << " Shares: " << shares << '\n'
              << " Share Price: $"
              << std::fixed << std::setprecision(3) << share_val;

    std::cout << " Total Worth: $"
              << std::fixed << std::setprecision(2) << total_val << '\n';
}
