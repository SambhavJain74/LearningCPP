#include <iostream>
using namespace std;

int stringToNumber(char input[],int ans=0) 
{
    if(input[0]=='\0')
    {
        return ans;
    }
    ans=ans*10+input[0]-48;
    stringToNumber(input+1,ans);
}

int main() 
{
    char input[50];
    cin >> input;
    cout << stringToNumber(input) << endl;
}
