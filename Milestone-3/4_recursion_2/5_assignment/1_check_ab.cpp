#include <iostream>
using namespace std;

bool checkAB(char input[],int index=0) 
{
	if(input[index]=='\0')
    {
        return true;
    }
    if(index==0)
    {
        if(input[0]=='a')
        {
            return checkAB(input, ++index);
        }
    }
    if(input[index-1]=='a')
    {
        if(input[index]=='a')
        {
            return checkAB(input,++index);
        }
        if(input[index]=='b'&&input[index+1]=='b')
        {
            index+=2;
            return checkAB(input,index);
        }
    }
    if(input[index-1]=='b')
    {
        if(input[index]=='a')
        {
            return checkAB(input,++index);
        }
    }
    return false;
}

int main() 
{
    char input[100];
    bool ans;
    cin >> input;
    for(int i=0;i<100;i++)
    {
        cout<<input[i];
    }
    ans=checkAB(input);
    if(ans)
        cout<< "true" << endl;
    else
        cout<< "false" << endl;
}
