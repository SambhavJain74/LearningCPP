#include<iostream>
using namespace std;
int main(){
    int a=15,b=30;
    int eand=a&b;
    int eor=a|b;
    int exor=a^b;
    cout<<" a bitwise and b "<<eand<<endl;
    cout<<" a bitwise or b "<<eor<<endl;  
    cout<<" a bitwise xor b "<<exor<<endl;  
    cout<<" not a"<<~a<<endl;  
    cout<<" left shift a"<<(a<<1)<<endl;  
    cout<<" right shift a "<<(a>>1)<<endl;  
    return 0;
}