#include<iostream>
using namespace std;
int main(){
    int n,even=0,odd=0;
    cin>>n;
    while(n>10){
        if((n%10)%2==0){
            even+=n%10;
        }
        else{
            odd+=n%10;
        }
        n=int(n/10);
    }
    if(n%2==0){
        even+=n;
    }
    else{
        odd+=n;
    }
    cout<<even<<' '<<odd;
    return 0;
}