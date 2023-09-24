#include<iostream>
using namespace std;
int main(){
	int n,dec=0,t=1;
	cin>>n;
	while(n>0){
		dec+=(n%10)*t;
		n/=10;
		t*=2;
	}
	cout<<dec;
	return 0;
}