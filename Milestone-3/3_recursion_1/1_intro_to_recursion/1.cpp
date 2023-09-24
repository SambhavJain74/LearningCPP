#include<iostream>
using namespace std;

long long fact(long long n)
{
    if(n==1){
        return 1;
    }
    else{
        return n*fact(n-1);
    }
}

int main()
{
    long n;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cout<<fact(i)<<endl;
    }
}