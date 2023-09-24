#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=i;j<=n+i-1;j++){
            cout<<(char)(j+64);
        }
        cout<<endl;
    }
    return 0;
}