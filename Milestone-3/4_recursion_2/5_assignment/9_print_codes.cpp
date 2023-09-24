#include <iostream>
using namespace std;

#include <string.h>
using namespace std;

void printAllPossibleCodes(string input, string code="",int count=0) 
{
    if(input.length()==0)
    {
        cout<<code<<endl;
    }
    else
    {
        string acode=code;
        acode+=(char)(input[0]+'a'-'0'-1);
        printAllPossibleCodes(input.substr(1),acode);
        if((input.length()>=2)&&((input[0]-'0')*10+input[1]-'0'<=26))
        {
            string bcode=code+(char)((input[0]-'0')*10+input[1]-'0'+'a'-1);
            printAllPossibleCodes(input.substr(2),bcode);
        }
    }
}



int main(){
    string input;
    cin >> input;
    printAllPossibleCodes(input);
    return 0;
}
