#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int input[100];
    for(int i=0;i<=n-1;i++){
        cin>>input[i];
    }
    for(int i=0;i<=n-1;i++){
        cout<<input[i]<<endl;
    }
}