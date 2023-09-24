#include<iostream>
using namespace std;
int main(){
    int basic;
    char grade;
    cin>>basic>>grade;
    int allow;
    if(int(grade)==65){
        allow=1700;
    }
    else if(int(grade)==66){
        allow=1500;
    }
    else{
        allow=1300;
    }
    if((basic*(1.59)+allow)-int(basic*(1.59)+allow)>=0.5){
        cout<<int(basic*(1.59)+allow)+1;
    }
    else{
        cout<<int(basic*(1.59)+allow);
    }
    return 0;
}