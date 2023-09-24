#include<iostream>
using namespace std;

int multiply(int a,int b){
    return a*b;
}
int main(){
    int a,b;
    cin>>a>>b;
    cout<<multiply(a,b);
    return 0;
}