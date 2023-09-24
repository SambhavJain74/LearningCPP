#include<iostream>
using namespace std;
int main(){
    int n;
    while(true){
        cout<<endl<<"Enter an integer"<<endl;
        cin>>n;
        if(n%2==0){
            cout<<"The entered integer is even"<<endl;
        }
        else{
            cout<<"The entered integer is odd"<<endl;
        }

    }
    return 0;
}