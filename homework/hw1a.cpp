// Program: HW1a.cpp
// Author: Lee Evans
// Date: 8/29/16

#include <iostream>
#include <iomanip>

using namespace std;

double getSalesAmt();
double calcCommission(double a);
double calcPay(double b);
double displayPay(double a, double b, double c);

int main()
{
    double amt;
    double calcC;
    double calcP;

    amt = getSalesAmt();
    calcC = calcCommission(amt);
    calcP = calcPay(calcC);
    displayPay(amt, calcC, calcP);

    return 0;
}

double getSalesAmt()
{
    double amount;
    cout << "Enter the monthly sales amount: ";
    cin >> amount;
    return amount;
}

double calcCommission(double a)
{
    double comm;
    if (a > 50000)
    {
        comm = a * 0.02;
    }
    else if (a >= 25000 && a <= 50000)
    {
        comm = a * 0.015;
    }
    else
    {
        comm = 0;
    }
    return comm;
}

double calcPay(double b)
{
    double pay;
    pay = 2500 + b;
    return pay;
}

double displayPay(double a, double b, double c)
{
    double total;
    cout << "Monthly Sales:   $" << setw(10) << right << fixed << setprecision(2) << a << endl;
    cout << "Commission:      $" << setw(10) << right << fixed << setprecision(2) << b << endl;
    cout << "Base Pay:        $" << setw(10) << right << fixed << setprecision(2) << c << endl;
    total = b + c;
    cout << "Total Pay:       $" << setw(10) << right << fixed << setprecision(2) << total << endl;
}
