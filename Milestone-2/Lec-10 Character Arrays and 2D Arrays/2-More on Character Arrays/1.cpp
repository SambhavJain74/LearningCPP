#include<iostream>
using namespace std;

int main()
{
    /*char input[100];
    cin>>input;
    cout<<input<<endl;
    char input2[100];
    cin.getline(input2,10);
    cout<<input2<<endl;*/
    char input3[10];
    cin.getline(input3,100,'o');
    cout<<input3<<endl;
    return 0;
}