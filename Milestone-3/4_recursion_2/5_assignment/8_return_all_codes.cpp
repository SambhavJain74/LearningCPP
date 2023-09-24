#include <iostream>
using namespace std;
#include <string.h>

int getCodes(string input, string output[10000],int count=0,string code="") 
{
    if(input.length()==0)
    {
        output[count]=code;
        return ++count;
    }
    else
    {
        string acode=code;
        acode+=(char)(input[0]+'a'-'0'-1);
        count=getCodes(input.substr(1),output,count,acode);
        if((input.length()>=2)&&((input[0]-'0')*10+input[1]-'0'<=26))
        {
            string bcode=code+(char)((input[0]-'0')*10+input[1]-'0'+'a'-1);
            count=getCodes(input.substr(2),output,count,bcode);
        }
        return count;
    }
}

int main()
{
    string input;
    cin >> input;

    string output[10000];
    int count = getCodes(input, output);
    for(int i = 0; i < count && i < 10000; i++)
        cout << output[i] << endl;
    return 0;
}
