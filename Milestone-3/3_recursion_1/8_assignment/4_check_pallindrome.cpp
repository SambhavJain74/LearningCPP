#include <iostream>
using namespace std;

bool checkPalindrome(char input[],int def_len=51) 
{
    int i=def_len;
    if(i==51)
    {
        i=0;
        while(input[i]!='\0'&&i<=49)
        {
            i++;
        }
        i--;
    }
    if(i<=0)
    {
        return true;
    }
    if(input[0]!=input[i])
    {
        return false;
    }
    return checkPalindrome(input+1,i-2);
}

using namespace std;

int main() {
    char input[50];
    cout<<input;
    cin >> input;
    
    if(checkPalindrome(input)) {
        cout << "true" << endl;
    }
    else {
        cout << "false" << endl;
    }
}
