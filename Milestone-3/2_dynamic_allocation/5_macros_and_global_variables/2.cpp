#include<iostream>
using namespace std;

int a=10;

void g()
{
    a*=2;
}

void f()
{
    a++;
    g();
}

int main()
{
    cout<<a<<endl;
    f();
    cout<<a<<endl;
}