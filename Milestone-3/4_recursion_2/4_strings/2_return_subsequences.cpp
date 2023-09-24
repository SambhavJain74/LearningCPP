#include<iostream> 
using namespace std;

int subsequences(string input, string output[])
{
    if(input.size()==0)
    {
        output[0]="";
        return 1;
    }
    int index=subsequences(input.substr(1),output);
    for(int i=index;i<2*index;i++)
    {
        output[i]=input[0]+output[i-index];
    }
    return index*2;
}

int main()
{
    string input;
    cin>>input;
    string output[1000];
    int size=subsequences(input,output);
    for(int i=0;i<size;i++)
    {
        cout<<output[i]<<endl;
    }

    return 0;
}