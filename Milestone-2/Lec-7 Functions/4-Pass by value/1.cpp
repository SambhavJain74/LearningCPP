#include<iostream>
using namespace std;

void increment(int a){
    a++;
}

int main(){
    int n=10;
    increment(n);
    cout<<n<<endl;
    return 0;
}