#include<iostream>
using namespace std;

void increment(int a,int b[], int n){
    a++;
    b[0]++;
}

void reverse(int input[], int n){
    for(int i=0;i<=n/2;i++){
        input[i]=input[i]+input[n-i-1];
        input[n-i-1]=input[i]-input[n-i-1];
        input[i]=input[i]-input[n-i-1];
    }
}

int main(){
    int a=10;
    int input[100]={1,2,3};
    for(int i=0;i<=99;i++){
        cout<<input[i]<<endl;
    }
    increment(a,input,100);
    cout<<a;
    cout<<input[0];
    reverse(input,100);
    for(int i=0;i<=99;i++){
        cout<<input[i]<<endl;
    }
    return 0;
}