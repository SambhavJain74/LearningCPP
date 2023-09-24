#include<iostream>
using namespace std;

int main(){
    int array[100];
    int n;
    cin>>n;
    for(int i=0;i<=n-1;i++){
        cin>>array[i];
    }
    for (int i = 0,sum=0; i <= n - 1; i++) {
      sum+=array[i];
      if(i==n-1){
          cout<<sum<<endl;
      }
    }
    cout<<array<<endl;
    cout<<sizeof(array);
}


