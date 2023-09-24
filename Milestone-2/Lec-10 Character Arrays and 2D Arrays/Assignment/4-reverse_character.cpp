#include <iostream>
#include <cstring>
using namespace std;

void removeAllOccurrencesOfChar(char input[], char c) 
{
    int curr_index=0;
    int i=0;
    for(int i=0;i<strlen(input);i++)
    {
        if(input[i]!=c)
        {
            input[curr_index]=input[i];
            curr_index++;
        }
    }
    input[curr_index]='\0';
}

int main() {
    int size = 1e6;
    char str[size];
    cin.getline(str, size);
    char c;
    cin >> c;
    removeAllOccurrencesOfChar(str, c);
    cout << str;
}