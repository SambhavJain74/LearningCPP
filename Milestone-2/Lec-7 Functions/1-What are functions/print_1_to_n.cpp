#include<iostream>
using namespace std;
void print_1_to_n(int n){
    for(int i=1;i<=n;i++){
        cout<<i<<endl;
    }
}

int main(){
    int n;
    cin>>n;
    print_1_to_n(n);
    return 0;
}