#include<iostream>
using namespace std;


int length(char s[])
{
    int length=0;
    for(;;length++)
    {
        if(s[length]=='\0')
        {
            break;
        }
    }
    return length;
}


int main()
{
    char arr1[10];
    cin>>arr1;
    cout<<arr1<<length(arr1)<<endl;;
    char name[100];
    cin>>name;
    cout<<name<<length(name)<<endl;
    name[3]='d';
    name[4]='x';
    cout<<name<<length(name)<<endl;
    name[1]='\0';
    cout<<name<<length(name)<<endl;
}