#include<iostream>
#include<bits/stdc++.h>
#define endl '\n'
using namespace std;

int returnPermutations(std::string input, std::string output[],int size=0)
{
    if(input.length()==1)
    {
        output[size]=input[0];
        return ++size;
    }
    else
    {
        size=returnPermutations(input.substr(1),output,size);
        //cout<<1<<endl;                                            //
        //cout<<"size is "<<size<<endl;                             //
        int length=output[0].length();
        int loopsize=size;
        for(int i=0;i<loopsize;i++)
        {                       
            //cout<<length<<endl;                                   //
            for(int j=0;j<length;j++)
            {                                     
                output[size]=output[i].substr(0,j+1)+input[0]+output[i].substr(j+1);
                //cout<<output[size]<<endl;                         //
                size++;
            }
            output[i]=input[0]+output[i];
        }
        //cout<<2<<endl;                                            //
        return size;
    }
}

using namespace std;
int main()
{
    string input;
    cin >> input;
    string output[10000];
    int count = returnPermutations(input, output);
    for(int i = 0; i < count && i < 10000; i++)
    {
        cout << output[i] << endl;
    }
    return 0;
}
