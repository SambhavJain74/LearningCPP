#include <iostream>
using namespace std;

int staircase(int n,int w=1)
{
    if(n==0)
    {
        return 1;
    }
    if(n<0)
    {
        return 0;
    }
    w=w*staircase(n-1,w)+w*staircase(n-2,w)+w*staircase(n-3,w);
    return w;
}

int main() 
{
    int n, output;
    cin >> n;
    output=staircase(n);
    cout<< output <<endl;
}
