#include <iostream>
#include <cstring>
using namespace std;

void trimSpaces(char input[])
{
    int current=0;
    int i=0;
    while(input[i]!='\0')
    {
        if(input[i]!=' '){
            input[current]=input[i];
            current++;
        }
        i++;
    }
    input[current]='\0';
}

int main() {
    char input[1000000];
    cin.getline(input, 1000000);
    trimSpaces(input);
    cout << input << endl;
}

