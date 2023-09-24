#include<iostream>
using namespace std;

void minLengthWord(char input[], char output[])
{
	int start=0,end=0,length;
    char *ptr;
    ptr=strchr(input, ' ')-input;
    end=ptr-1;
    length=start-end;
    while(ptr!=0)
    {
        ptr=strchr(input, ' ')-input;
        input[ptr]='0';
        if((ptr-1-end-1)<length)
        {
            length=ptr-end-2;
            start=end+1,end=ptr-1;
        }
    }
    for(int i=start,i<=end;i++)
    {
        output[i-start]=input[i];
    }
    output[length]='\0';
}

int main(){
  char ch[10000], output[10000];
  cin.getline(ch, 10000);
  minLengthWord(ch, output);
  cout << output << endl;
}
