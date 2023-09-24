#include<iostream>
using namespace std;

int main()
{
    double i=10.000001;
    double *p=&i;
    cout<<p<<endl;
    p--;
    cout<<p<<endl;

    return 0;
}