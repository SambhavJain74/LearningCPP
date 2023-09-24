#include<iostream>
using namespace std;

int main()
{
    int n,m;
    cout<<"Enter the number of rows";
    cin>>n;
    cout<<"Enter the number of columns";
    cin>>m;

    int **p=new int*[n];
    for(int i=0;i<n;i++)
    {
        p[i]=new int[m];
    }

    for(int i=0;i<n;i++)
    {
        del []p[i];
    }
    del []p;
}
