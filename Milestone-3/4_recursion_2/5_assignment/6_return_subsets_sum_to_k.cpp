#include <iostream>
using namespace std;

int subsetSumToK(int input[], int n, int output[][50], int k, int o_size=0,int subset[20]={0},int s_size=0) 
{
    if(n==0)
    {
        return o_size;
    }
    if(input[0]==k)
    {
        output[o_size][0]=s_size;
        for(int i=1;i<s_size;i++)
        {
            output[o_size][i]=subset[i-1];
        }
        output[o_size][s_size]=k;
        o_size++;
        o_size=subsetSumToK(input+1,n-1,output,k,o_size);
        return o_size;
    }
    else if(input[0]<k)
    {
        o_size=subsetSumToK(input+1,n-1,output,k,o_size,subset,s_size);
        subset[s_size]=input[0];
        s_size++;
        o_size=subsetSumToK(input+1,n-1,output,k-input[0],o_size,subset,s_size);
        return o_size;
    }
    else
    {
        o_size=subsetSumToK(input+1,n-1,output,k,o_size);
        return o_size;
    }
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
