#include <iostream>
#include<algorithm>
using namespace std;

int subsetSumToK(int input[], int n, int output[][50], int k, int o_size=0,int subset[20]={0},int s_size=0) 
{
    if(n==0)
    {
        if(k==0)
        {
            output[o_size][0]=s_size;
            for(int i=0;i<s_size;i++)
            {
                output[o_size][i+1]=subset[i];
            }
            o_size++;
        }
        return o_size;
    }
    else
    {
        int acopy[20],bcopy[20];
        copy(subset,subset+s_size,acopy);
        copy(subset,subset+s_size,bcopy);
        o_size=subsetSumToK(input+1,n-1,output,k,o_size,acopy,s_size);
        if(input[0]<=k)
        {
            bcopy[s_size]=input[0];
            o_size=subsetSumToK(input+1,n-1,output,k-input[0],o_size,bcopy,++s_size);
        }                      
        return o_size;
    }
    return o_size;
}

int main() 
{
    int input[20],length, output[10000][50], k;
    cin >> length;
    for(int i=0; i < length; i++)
    {
        cin >> input[i];
    }
    cin>>k;
    int size=subsetSumToK(input,length,output,k);
    for( int i = 0; i < size; i++) 
    { 
        for(int j=1;j<=output[i][0];j++) 
        { 
            cout<<output[i][j]<< " ";
        }
        cout<<endl;
    }
}
