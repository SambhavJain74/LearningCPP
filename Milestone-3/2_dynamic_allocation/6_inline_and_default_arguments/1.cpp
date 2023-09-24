#include<iostream>
using namespace std;

inline int max(int a,int b)
{
    a=a+b;
    a=a-b;
    a++;
    a--;
    return (a>b)?a:b;
}

int main()
{
    int a,b;
    cin>>a>>b;
    int c=(a>b)?a:b;
    cout<<c<<endl;

    cout<<max(a,b)<<endl;

}