#include<iostream>
using namespace std;

void scan_array(int a[][100],int m,int n)
{
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>a[i][j];
        }
    }
}

void print_array(int a[][2],int m,int n)
{
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
}

int main()
{
    int arr1[100][100];
    int m,n;
    cin>>m>>n;
    scan_array(arr1,m,n);
    //print_array(arr1,m,n);

    int arr2[2][2]={{1,2},{3,4}};
    print_array(arr2,2,2);
}