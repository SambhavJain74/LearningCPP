#include<iostream>
using namespace std;
int main(){
    int c,r;
    while(true){
    cout<<"Enter the number of rows and columns\n";
    cin>>c>>r;
    for(int i=1;i<=c;i++){
            cout<<"* ";
        }
    cout<<endl;
    for(int i=2;i<=r-1;i++){
        cout<<"* ";
        for(int j=2;j<=c-1;j++){
            cout<<"  ";
        }
        cout<<"*";
        cout<<endl;
    }
    for(int i=1;i<=c;i++){
            cout<<"* ";
        }
    cout<<endl;
    }
    return 0;                       //Incorrect for n=1
}