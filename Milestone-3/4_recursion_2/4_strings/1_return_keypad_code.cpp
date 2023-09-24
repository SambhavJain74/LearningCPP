#include <iostream>
#include <string>
using namespace std;

int keypad(int num, string output[])
{
    string keypad_codes[10]={"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
    if(num<=9)
    {
        for(int i=0;i<keypad_codes[num].size();i++)
        {
            output[i]=keypad_codes[num][i];
        }
        //cout<<num<<"    "<<keypad_codes[num].size()<<endl;              //
        return keypad_codes[num].size();
    }
    int size=keypad(num/10,output);
    for(int i=0;i<size;i++)
    {
        for(int j=0,k=i+size*(keypad_codes[num%10].size()-1);j<keypad_codes[num%10].size();j++,k-=size)
        {
            output[k]=output[i]+keypad_codes[num%10][j];
        }
    }
    size=size*keypad_codes[num%10].size();
    num/=10;
    //cout<<num%10<<"    "<<size*keypad_codes[num%10].size()<<endl;              //
    return size;
}

int main(){
    int num;
    cin >> num;
    string output[10000];
    int count = keypad(num, output);
    cout<<count<<endl;
    for(int i = 0; i < count && i < 10000; i++)
    {
        cout << output[i] << endl;
    }
    return 0;
}