#include<iostream>
using namespace std;

int length(char str[])
{
    if(str[0]=='\0')
    {
        return 0;
    }
    return 1+length(str+1);
}

int main()
{
    char str[100];
    cin>>str;

    int l=length(str);
    cout<<l<<endl;
}