#include<iostream>
using namespace std;
#include <climits>

int main(){
    int n,first,second,t,diff=0;
    cin>>n;
    if(n==0||n==1){
        cout<<INT_MIN;
        return 0;
    }
    cin>>first>>second;
    if(first<second){
        first=second+first;
        second=first-second;
        first=first-second;
        diff=2;
    }
    if(first==second){
        diff=1;
    }
    n=n-2;
    while(n--){
        cin>>t;
        if((t>second)&&(t<first)){
            second=t;
            diff++;
        }
        else if(t>first){
            second=first;
            first=t;
            diff++;
        }
    }
    if(diff==1){
        cout<<INT_MIN;
        return 0;
    }
    cout<<second;
    return 0;
}
