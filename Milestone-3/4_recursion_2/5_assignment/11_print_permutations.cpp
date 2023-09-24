#include <iostream>
#include <string>
using namespace std;

void printPermutations(string input,string prefix="")
{
    if(input.length()==0)
    {
        cout<<prefix<<endl;
    }
    for(int i=0;i<input.length();i++)
    {
        printPermutations(input.substr(0,i)+input.substr(i+1),prefix+input[i]);
    }
}

int main() 
{
    string input;
    cin >> input;
    printPermutations(input);
    return 0;
}