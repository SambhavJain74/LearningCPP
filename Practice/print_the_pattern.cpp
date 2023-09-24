#include<iostream>
using namespace std;
int main(){
        int n;
        cin>>n;
    for(int i=0;i<=2*(int((n-1)/2));i+=2){
		for(int j=1;j<=n;j++){
			cout<<n*i+j<<" ";
		}
        cout<<endl;
	}
	for(int i=int(n/2)+1;i>=1;i-=2){
		for(int j=1;j<=n;j++){
			cout<<n*i+j<<" ";
		}
        cout<<endl;
    }
    return 0;
}