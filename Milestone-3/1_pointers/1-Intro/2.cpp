#include<iostream>
using namespace std;

int main()
{
    int i=10;
    int *p=&i;
    cout<<sizeof(p)<<endl;
    cout<<i<<endl;
    cout<<*p<<endl;

    i++;
    cout<<i<<endl;
    cout<<*p<<endl;

    int a=i;
    a++;
    cout<<i<<endl;

    int b=*p;
    b++;
    cout<<i<<endl;


    return 0;
}