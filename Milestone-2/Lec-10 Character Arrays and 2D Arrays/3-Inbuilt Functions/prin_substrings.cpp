#include <iostream>
#include <cstring>
using namespace std;

void printSubstrings(char input[]) {
    for(int i=0;i<=strlen(input)-1;i++)
    {
        for(int j=i;j<=strlen(input)-1;j++)
        {
            for(int k=i;k<=j;k++)
            {
                cout<<input[k];
            }
            cout<<endl;
        }
    }
}

int main() {
    int size = 1e6;
    char str[size];
    cin >> str;
    printSubstrings(str);
}