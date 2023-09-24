#include <iostream>
#include <cstring>
#include<string>
using namespace std;

string getCompressedString(string &input) 
{
    int curr_index=0,i=0,freq=0;
    char curr_char=input[0];
    char str1[1000000];
    for(;input[i]!='\0';i++)
    {
        if(input[i]==curr_char)
        {
            //cout<<1<<endl;                          //
            freq++;
        }
        else
        {
            str1[curr_index]=curr_char;
            curr_char=input[i];
            //cout<<curr_char<<i;                    //
            curr_index++;
            if(freq>1)
            {
            str1[curr_index]=(char)(freq+48);
            curr_index++; 
            }
            freq=1;
        }
    }
    str1[curr_index]=curr_char;
    curr_char=input[i];
    //cout<<curr_char<<i;                    //
    curr_index++;
    if(freq>1)
    {
        str1[curr_index]=(char)(freq+48);
        curr_index++; 
    }
    str1[curr_index]='\0';
    //cout<<curr_index<<" "<<input<<endl;
    return str1;
}

int main() {
    int size = 1e6;
    string str;
    cin >> str;
    str = getCompressedString(str);
    cout << str << endl;
}