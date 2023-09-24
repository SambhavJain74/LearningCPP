#include <iostream>
#include <cstring>
using namespace std;

bool isPermutation(char input1[], char input2[]) 
{
    bool isp = false;
    for (int i = 0; i < strlen(input1); i++) 
    {
        int freq1=0,freq2=0;
        for(int j=0;j<strlen(input1);j++)
        {
            if(input1[i]==input1[j])
            {
                freq1++;
            }
        }
        for (int j = 0; j < strlen(input2); j++) 
        {
            if (input1[i] == input2[j]) 
        {
            freq2++;
        }
        }
        if (freq1!=freq2) 
        {
        return false;
        }
    }
        return true;
}

int main() 
{
    int size = 1e6;
    char str1[size];
    char str2[size];
    cin >> str1 >> str2;
    cout << (isPermutation(str1, str2) ? "true" : "false");
}