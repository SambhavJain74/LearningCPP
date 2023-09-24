#include<iostream>
using namespace std;

int print_numbers(int n)
{
    if(n==0)
    {
        return 0;
    }
    print_numbers(n-1);
    cout<<n<<" ";
    return 0;
}

int main()
{
    int n;
    cin>>n;
    print_numbers(n);
}