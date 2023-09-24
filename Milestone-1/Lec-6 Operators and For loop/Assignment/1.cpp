#include<iostream>
using namespace std;
int main(){
	int n,c;
	int prod=1;
	cin>>n>>c;
	if(c==1){
		cout<<n*(n+1)/2;
	}
	else if(c==2){
		for(int i=1;i<=n;i++){
			prod*=i;
		}
		cout<<prod;
	}
	else{
		cout<<"-1";
	}
	return 0;
}