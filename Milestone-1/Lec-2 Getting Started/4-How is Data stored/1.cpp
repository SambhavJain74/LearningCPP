#include<iostream>
using namespace std;
int main(){
    int a;
    char c;

    a=100;
    c=a;
    cout<<c<<endl;

    a=1990;
    c=a;
    cout<<c<<endl;

    c='y';
    a=c;
    cout<<a<<endl;

    float f=1.2;
    c=f;
    cout<<c<<endl;

    c='0';
    a=c;
    cout<<a<<endl;

    a=10;
    c='a';
    cout<<a+c<<endl;
    char d =a+c;
    cout<<d<<endl;

    return 0;
}