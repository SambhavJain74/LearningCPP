#include <iostream>
using namespace std;

void reverseStringWordWise(char input[]) {
    int length=0;
    int arr[100];
    int curr=0;
    if(input[0]!=' ')
    {
        arr[curr]=0;
        curr++;
    }
    while(input[length]!='\0')
    {
        if(input[length]==' ')
        {
            arr[curr]=length;
            curr++;
        }
        length++;
    }
    int j=length;
    arr[curr]=length;
    for(int i=curr-1;i>=1;i--)
    {
        for(int k=arr[i]+1;k<=arr[i+1]-1;k++)
        {
            input[j]=input[k];
            j++;
        }
        input[j]=' ';
        j++;
    }
    for (int k = arr[0]; k <= arr[1] - 1; k++) {
      input[j] = input[k];
      j++;
    }
    for(int i=0;i<=length-1;i++)
    {
        input[i]=input[length+i];
    }
    input[length]='\0';
}

using namespace std;

int main() {
    char input[1000];
    cin.getline(input, 1000);
    reverseStringWordWise(input);
    cout << input <<endl;
}
