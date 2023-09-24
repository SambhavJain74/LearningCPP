#include<iostream>
using namespace std;

int main()
{
    int i=1;
    while(i--)
    {
        int *p=new int;
        delete p;
        cout<<p;
    }
}