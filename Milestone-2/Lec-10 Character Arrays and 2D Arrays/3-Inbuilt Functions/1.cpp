#include<iostream>
#include<cstring>
using namespace std;

int main()
{
    char input1[100],input2[100],str3[100],str4[100];
    cin>>input1>>input2;

    int len=strlen(input1);
    cout<<len<<endl;

    cout<<strcmp(input1,input2)<<endl;

    strcpy(str3,input2);
    cout<<str3<<endl;

    strncpy(str4,str3,4);
    cout<<str4<<endl;
    return 0;
}