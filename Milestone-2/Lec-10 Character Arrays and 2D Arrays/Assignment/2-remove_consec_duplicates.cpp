#include <iostream>
#include <cstring>
using namespace std;

void removeConsecutiveDuplicates(char input[])
{
    char current_char=input[0];
    int current_index=1;

    if(current_char=='\0')
    {
        return;
    }

    for(int i=1;i<strlen(input);i++)
    {
        if(input[i]==current_char)
        {
            continue;
        }
        else
        {
            current_char=input[i];
            input[current_index]=current_char;
            current_index++;
        }
    }
    input[current_index]='\0';
}

int main() {
    int size = 1e6;
    char str[size];
    cin>>str;
    removeConsecutiveDuplicates(str);
    cout<<str;
}