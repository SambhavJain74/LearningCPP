#include <iostream>
using namespace std;

void removeX(char input[]) 
{
    if(input[0]=='\0')
    {
        return;
    }
    if(input[0]=='x')
    {
        int i=0;
        while(input[i]!='\0')
        {
            input[i]=input[i+1];
            i++;
        }
        removeX(input);
    }
    removeX(input+1);
}

int main() {
    char input[100];
    cin.getline(input, 100);
    removeX(input);
    cout << input << endl;
}
