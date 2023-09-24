#include<iostream>
using namespace std;

int main()
{
    int a[10];
    cout<<a<<endl;
    cout<<&a[0]<<endl;
    a[0]=5;
    cout<<*a<<endl;
    a[1]=10;
    cout<<*(a+1)<<endl;

    cout<<endl<<sizeof(a)<<endl;
    cout<<a<<"  "<<&a<<"  "<<&(a[9])<<endl;
    //a=a+3;                                    //wrong

    int *p=&a[0];
    cout<<p<<"  "<<a<<endl;
    cout<<sizeof(p)<<"  "<<sizeof(a)<<endl;

    return 0;
}