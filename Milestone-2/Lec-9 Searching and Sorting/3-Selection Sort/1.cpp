#include<iostream>
using namespace std;

void selection_sort(int *array1,int size){
    for(int i=0;i<=size-2;i++){
        for(int j=i+1;j<=size-1;j++){
            if(array1[j]<array1[i]){
                array1[i]+=array1[j];
                array1[j]=array1[i]-array1[j];
                array1[i]=array1[i]-array1[j];
            }
        }
        
    }
}

int main(){
    int array1[]={9,8,7,6,5,4,3,2,1,0};
    selection_sort(array1,10);
    for(int i=0;i<=9;i++){
        cout<<array1[i]<<endl;
    }
    return 0;
}