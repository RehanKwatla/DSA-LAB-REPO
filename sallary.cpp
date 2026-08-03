//basic salary + 10% + 5% - 2%
#include<iostream>
using namespace std;
int main() {
    float basic, hra, ta, tax, total;
    cout<<"enter basic salary: ";
    cin>>basic;
    hra = basic * 0.10;
    ta = basic * 0.05;
    tax = basic * 0.02;
    total = basic + hra + ta - tax;
    cout << total;
}

