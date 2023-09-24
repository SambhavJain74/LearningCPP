#include<iostream>
using namespace std;

bool is_sorted(int arr[],int n)
{
    if(n==0)
    {
        return true;
    }
    if(arr[n-1]>arr[n])
    {
        return false;
    }
    return is_sorted(arr,n-1);
}

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<is_sorted(arr,n)<<endl;
}