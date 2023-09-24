#include<iostream>
using namespace std;
int main(){
    int i,n;
    while(1){
    cin>>n;
    i=0;
    while(i*i<=n){
        i++;
    }
    cout<<i-1;
    }
}