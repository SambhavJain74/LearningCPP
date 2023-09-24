#include<iostream>
#include<cstring>
using namespace std;

int main()
{
    char str1[100];
    cin>>str1;
    for(int i=0;i<=strlen(str1)-1;i++)
    {
        char str2[i+2];
        strncpy(str2,str1,i+1);
        str2[i+1]='\0';
        cout<<str2<<endl;
    }
    return 0;
}