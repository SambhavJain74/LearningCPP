#include<iostream>
using namespace std;
int main(){
while(true){    
    int a,b;
    cout<<endl<<"Enter two numbers"<<endl;
    cin>>a>>b;

    if(a>b){
        cout<<"The first number is greater"<<endl;
    }
    else if(a==b){
        cout<<"The two numbers are equal"<<endl;
    }
    else{
        cout<<"The second number is greater"<<endl;
    }
}
return 0;
}
