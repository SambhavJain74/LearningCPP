#include<iostream>
using namespace std;

int main()
{
    char input1[100];
    cin.getline(input1,100);
    int length=0;
    while(input1[length]!='\0')
    {
        length++;
    }
    for(int i=0;i<=int(length/2)-1;i++)
    {
        char temp=input1[i];
        input1[i]=input1[length-i-1];
        input1[length-i-1]=temp;
    }
    cout<<input1<<endl;
}