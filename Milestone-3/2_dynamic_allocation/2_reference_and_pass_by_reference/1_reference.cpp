#include<iostream>
using namespace std;

int main()
{
    int i=10;
    int& j=i;
    i++;
    cout<<j<<endl;
    j++;
    cout<<i<<endl;
    int k=100;
    j=k;
    cout<<i<<endl;

    return 0;
}