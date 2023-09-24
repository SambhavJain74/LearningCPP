#include <iostream>
#include <cstring>
using namespace std;

char highestOccurringChar(char input[]) 
{
    int arr[26]={0,0,0,0,0,             //5
                 0,0,0,0,0,             //10
                 0,0,0,0,0,             //15
                 0,0,0,0,0,             //20
                 0,0,0,0,0,             //25
                 0                      //26
                 };
    for(int i=0;i<strlen(input);i++)
    {
        arr[(int(input[i]))-97]++;
    }
    int index=0;
    for(int i=0;i<26;i++)
    {
        if(arr[i]>arr[index])
        {
            index=i;
        }
    }
    return (char)(index+97);
}

int main() {
    int size = 1e6;
    char str[size];
    cin >> str;
    cout << highestOccurringChar(str);
}