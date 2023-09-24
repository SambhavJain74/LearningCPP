#include <iostream>
#include <string>
using namespace std;

void printKeypad(int num,string successive="")
{
    string keypad_codes[10]={"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
    if(num<=9)
    {
        for(int i=0;i<keypad_codes[num].size();i++)
        {
            cout<<keypad_codes[num][i]+successive<<endl;
        }
        return;
    }
    for(int i=0;i<keypad_codes[num%10].size();i++)
    {
        string successive1=keypad_codes[num%10][i]+successive;
        printKeypad(num/10,successive1);
    }
}

int main(){
    int num;
    cin >> num;

    printKeypad(num);

    return 0;
}
