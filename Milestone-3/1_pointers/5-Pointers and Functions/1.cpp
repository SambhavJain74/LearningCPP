#include<iostream>
using namespace std;

void print(int *p)
{
    cout<<*p<<endl;
}

void increment_pointer(int *p)
{
    p++;
}

void increment(int *p)
{
    (*p)++;
}

void incre(int i)
{
    i++;
}

int main()
{
    int i=10;
    int *p=&i;
    print(p);

    cout<<p<<endl;
    increment_pointer(p);
    cout<<p<<endl;

    cout<<i<<endl;
    increment(p);
    cout<<i<<endl;

    cout<<i<<endl;
    incre(i);
    cout<<i<<endl;
    
    return 0;
}