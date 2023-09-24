#include <iostream>
using namespace std;

void pairStar(char input[], int i=100) 
{
    if(input[0]=='\0')
    {
        return;
    }
    if(i==100)
    {
        i=0;
        while(input[i]!='\0')
        {
            i++;
        }
        i--;
    }
    if(input[0]==input[1])
    {
        for(int j=i+1;j>=1;j--)
        {
            input[j+1]=input[j];
        }
        input[1]='*';
        pairStar(input+2,i-1);
    }
    pairStar(input+1,i-1);
}

int main() {
   char input[100];
   cin.getline(input, 100);
   pairStar(input);
   cout << input << endl;
}
