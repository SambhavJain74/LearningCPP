#include<iostream>
using namespace std;
int main(){
    int n,prev,curr;
    cin>>n;
    if(n==1){
        cout<<"true";
    }
    cin>>prev>>curr;
    int i=2;
    while(curr<prev){
        prev=curr;
        cin>>curr;
        i++;
        if(i==n){
            break;
        }
    }
    while((i<n)&&(curr>prev)){
        prev=curr;
        cin>>curr;
        i++;
        if(i==n){
            break;
        }
    }
    if(i==n){
        cout<<"true";
    }
    else{
        cout<<"false";
    }
    return 0;
}