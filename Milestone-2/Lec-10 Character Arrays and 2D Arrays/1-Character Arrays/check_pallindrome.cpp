#include <iostream>
#include <cstring>
using namespace std;

bool checkPalindrome(char str[]) {
    int length;
    while(str[length]!='\0')
    {
        length++;
    }
    for(int i=0;i<=int(length/2);i++)
    {
        if(str[i]!=str[length-i-1])
        {
            return false;
        }
    }
    return true;
}


int main() {
    int size = 1e6;
    char str[size];
    cin >> str;
    cout << (checkPalindrome(str) ? "true" : "false");
}