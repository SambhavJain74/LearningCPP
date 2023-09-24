#include<iostream>
using namespace std;

void minLengthWord(char input[], char output[])
{
	int start=0,end=-2,length=INT16_MAX,previous_space=-1,i=0;
    for(;input[i]!='\0';i++)
    {
        if(input[i]==' ')
        {
            if((i-1-previous_space-1)<length)
            {
                length=i-previous_space-2;
                start=previous_space+1;
                end=i-1;
            }
            previous_space=i;
        }
    }
    if((i-1-previous_space-1)<length)
            {
                length=i-previous_space-2;
                start=previous_space+1;
                end=i-1;
            }
    int j=0;
    for(int i=start;i<=end;i++,j++)
    {
        output[j]=input[i];
    }
    output[j]='\0';
}

int main(){
  char ch[10000], output[10000];
  cin.getline(ch, 10000);
  minLengthWord(ch, output);
  cout << output << endl;
}
