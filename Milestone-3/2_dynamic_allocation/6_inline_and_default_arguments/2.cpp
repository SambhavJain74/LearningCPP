#include<iostream>
using namespace std;

int sum(int a[],int size, int si=0)
{
    int sum=0;
    for(int i=si;i<size;i++)
    {
        sum+=a[i];
    }
    return sum;
}

int main()
{
    int arr[10]={5,5,5,5,5,5,5,5,5,5};
    cout<<sum(arr,10,5)<<endl;
    return 0;
}