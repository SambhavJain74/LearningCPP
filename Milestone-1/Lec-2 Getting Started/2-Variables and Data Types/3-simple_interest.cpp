#include<iostream>
using namespace std;
int main(){
    float prin,roi,t,si;
    cout<<"Enter the principal amount"<<endl;
    cin>>prin;
    cout<<"Enter the rate of interest in percentage"<<endl;
    cin>>roi;
    cout<<"Enter the time in years"<<endl;
    cin>>t;
    si=prin*roi*t/100;
    cout<<"The simple interest for the amount of "<<prin<<"rupees at a rate of interest of "<<roi<<"% over "<<t<<" years is "<<si<<" rupees";
    return 0;
}