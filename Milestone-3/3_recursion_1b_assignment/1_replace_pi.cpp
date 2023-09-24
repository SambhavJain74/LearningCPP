#include <iostream>
using namespace std;

void replacePi(char input[], int i=10000) 
{
    if(input[0]=='\n')
    {
        return;
    }
    if(i==10000)
    {
        i=0;
        while(input[i]!='\0')
        {
            i++;
        }
        i--;
    }
    if((input[0]=='p')&&(input[1]=='i'))
    {
        input[0]='3';
        input[1]='.';
        for(int j=i;j>=2;j--)
        {
            input[j+2]=input[j];
        }
        input[2]='1';
        input[3]='4';
        replacePi(input+4,i-2);
    }
    replacePi(input+1,i-1);
}


int main() {
    char input[10000];
    cin.getline(input, 10000);
    replacePi(input);
    cout << input << endl;
}
