#include<bits/stdc++.h>
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl
#define endl "\n"
#define int long long
using ll=long long;
using namespace std;

void fibonacci(int n,int *a,int *b)
{
    if(n<=1)
    {
        *a=1;
        *b=1;
        return;
    }
    fibonacci(--n,a,b);
    *a+=*b;
    *b=*a-*b;
    return;
}

int32_t main()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    int n,fn,fn_1;
    cin>>n;
    fibonacci(n,&fn,&fn_1);
    cout<<fn<<endl;
    return 0;
}