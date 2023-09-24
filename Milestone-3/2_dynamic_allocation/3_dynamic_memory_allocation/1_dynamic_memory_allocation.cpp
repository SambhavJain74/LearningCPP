#include<iostream>
using namespace std;

int main()
{
    int *p=new int;
    *p=10;
    cout<<*p<<"     "<<p<<endl;

    double *pd=new double;
    *pd=10.123123;
    cout<<*pd<<"    "<<pd<<endl;

    int *pa=new int[50];
    for(int i=0;i<50;i++)
    {
        cout<<i<<"  "<<*(pa+i)<<endl;
    }
    cout<<pa<<endl;

    int n;
    cin>>n;

    int *pn=new int[n];
    for(int i=0;i<n;i++)
    {
        cout<<i<<"  "<<pn[i]<<endl;
    }

    return 0;
}