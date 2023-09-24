#include<iostream>
using namespace std;

int main()
{
    int i=10;
    cout<<i<<endl;
    i++;
    cout<<i<<endl;
    //int *p=&i;
    //cout<<p<<endl;
    //cout<<*p<<endl;
    int a = 100, b = 200;
    int *p = &a, *q = &b;
    p = q;
    cout<<a<<b;

    return 0;
}