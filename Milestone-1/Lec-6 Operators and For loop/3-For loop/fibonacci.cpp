#include<iostream>
using namespace std;
int main(){
        int n;
        cin>>n;
        if(n<=2){
                cout<<"1";
        }
        else{
                for(int i=3,fn=1,fn_1=1;i<=n;i++){
                        fn=fn+fn_1;
                        fn_1=fn-fn_1;                        
                        if(i==n){
                            cout<<fn;
                        }
                }
        }
        return 0;
}