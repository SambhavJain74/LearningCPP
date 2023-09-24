#include<iostream>
using namespace std;
int main(){
	int x;
	cin>>x;
	for(int i=1,t=1;t<=x;i++){
          if((3*i+2)%4!=0){
			  cout<<3*i+2<<" ";
			  t++;
		  }
        }
	return 0;
}