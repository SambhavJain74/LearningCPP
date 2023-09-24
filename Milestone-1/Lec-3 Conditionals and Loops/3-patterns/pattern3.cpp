#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int s=1;s<=3*(n-i);s++){
            cout<<" ";
        }
        for(int j=i*(i-1)/2+1;j<=i*(i+1)/2;j++){
            cout<<j<<" ";
        }
        cout<<endl;
    }
    return 0;
}