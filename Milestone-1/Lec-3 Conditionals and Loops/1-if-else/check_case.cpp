#include<iostream>
using namespace std;
int main(){
	char c;
    while (true){
        cin>>c;
        if((65<=int(c))and int(c)<=90){
            cout<<"1";
        }
        else if((97<=int(c))and int(c)<=122){
            cout<<"0";
        }
        else{
            cout<<"-1";
        }
    }
	return 0;
}