#include<iostream>
using namespace std;

int main()
{
    string s="abc";
    cout<<s<<endl;
    string s1;
    getline(cin,s1);
    cout<<s1<<endl;
    string s2=s+s1;
    cout<<s2<<endl;
    cout<<s2.substr(4,6)<<endl;
    cout<<s.find("bc");
    return 0;
}