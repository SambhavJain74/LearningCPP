#include<iostream>
using namespace std;
/*int fact(int n){
    if(n==0||n==1){
        return 1;
    }
    else{
        return n*fact(n-1);
    }
}
*/

int fact(int n){
    int fact=1;
    while(n){
        fact*=n;
        n--;
    }
    return fact;
}

int main(){
    int n,r,ncr;
    cout<<"Enter n"<<endl;
    cin>>n;
    cout<<"Enter r"<<endl;
    cin>>r;
    ncr=fact(n)/(fact(n-r)*fact(r));
    cout<<ncr;
    return 0;
}