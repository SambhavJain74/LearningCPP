#include <iostream>
#include <cstring>
using namespace std;

void reverseEachWord(char input[]) 
{
    int word_start=0,word_end=0;
    int i=0;
    while(i<strlen(input))
    {
        if((input[i]!=' '))
        {
            i++;
        }
        else
        {
            word_end=i-1;
            for(int j=word_start,k=word_end;j<=k;j++,k--)
            {
                char temp=input[k];
                input[k]=input[j];
                input[j]=temp;
            }
            i++;
            word_start=i;
        }
    }
    for(int j=word_start,k=strlen(input)-1;j<=k;j++,k--)
            {
                char temp=input[k];
                input[k]=input[j];
                input[j]=temp;
            }
}

int main() {
    int size = 1e6;
    char str[size];
    cin.getline(str, size);
    reverseEachWord(str);
    cout << str;
}