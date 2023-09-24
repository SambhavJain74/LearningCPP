#include<iostream>
using namespace std;
void printTheDiamond(int r,int c,int s){
		while(r--){
			for(int i=1;i<=s;i++){
                for(int j=1;j<=c;j++){
                    for(int k=1;k<=s-i;k++){
                        cout<<"e";
                        //cout<<endl<<"test1";
                    }
                    cout<<"/";
                    for(int k=1;k<=i-1;k++){
                        cout<<"oo";
                        //cout<<endl<<"test2";
                    }
                    cout<<"\\";
                    for(int k=1;k<=s-i;k++){
                        cout<<"e";
                        //cout<<endl<<"test3";
                }
            }
            cout<<endl;
	}
            for(int i=s;i>=1;i--){
                for(int j=1;j<=c;j++){
                    for(int k=1;k<=s-i;k++){
                        cout<<"e";
                        //cout<<endl<<"test4";
                    }
                    cout<<"\\";
                    for(int k=1;k<=i-1;k++){
                        cout<<"oo";
                        //cout<<endl<<"test5";
                    }
                    cout<<"/";
                    for(int k=1;k<=s-i;k++){
                        cout<<"e";
                        //cout<<endl<<"test6";
                }
            }
             cout<<endl;
	}
    }
    }
int main(){
    while(true){
        int r,c,s;
        cin>>r>>c>>s;
        printTheDiamond(r,c,s);
        cout<<endl;
    }
}