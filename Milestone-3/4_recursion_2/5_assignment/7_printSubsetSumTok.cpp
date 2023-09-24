#include <iostream>
using namespace std;

void printSubsetSumToK(int input[], int n, int k, int subset[20]={0},int s_size=0) 
{
    if(n==0)
    {
        if(k==0)
        {
            for(int i=0;i<s_size;i++)
            {
                cout<<subset[i]<<" ";
            }
            cout<<endl;
        }
    }
    else
    {
        int acopy[20],bcopy[20];
        copy(subset,subset+s_size,acopy);
        copy(subset,subset+s_size,bcopy);
        printSubsetSumToK(input+1,n-1,k,acopy,s_size);
        if(input[0]<=k)
        {
            bcopy[s_size]=input[0];
            printSubsetSumToK(input+1,n-1,k-input[0],bcopy,++s_size);
        }       
    }
}


int main() {
  int input[1000],length,k;
  cin >> length;
  for(int i=0; i < length; i++)
    cin >> input[i];
  cin>>k;
  printSubsetSumToK(input, length,k);
}
