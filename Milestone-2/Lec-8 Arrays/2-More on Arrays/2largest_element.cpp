#include<iostream>
using namespace std;
int main(){
    int array[5];
    array[0]=5;
    array[1]=10;
    array[2]=15;
    array[3]=17;
    array[4]=9;
    int max=INT_MIN;
    cout<<max;
    for(int i=0;i<=4;i++){
        if(array[i]>max){
            max=array[i];
        }
    }
    cout<<max;
}