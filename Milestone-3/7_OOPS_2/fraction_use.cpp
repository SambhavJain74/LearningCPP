#include<iostream>
using namespace std;
#include "fraction_class.cpp"

int main()
{
    Fraction f1(10,2);
    Fraction f2(15,4);


    f1.print();
    f1++.print();
    ++f1;
    f1.print();

    (f1+=f2)+=f2;
    f1.print();
    f2.print();
}