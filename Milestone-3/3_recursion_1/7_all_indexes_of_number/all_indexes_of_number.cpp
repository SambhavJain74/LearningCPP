#include<iostream>
using namespace std;

int allIndexes(int input[], int size, int x, int output[]) 
{
    if(size>=1)
    {
        if(input[size-1]==x)
        {
        int ans= 1+allIndexes(input,size-1,x,output);
        output[ans-1]=size-1;
        return ans;
        }
        int ans= allIndexes(input,size-1,x,output);
        return ans;
    }
    int ans=0;
    return ans;
}

int main(){
    int n;
    cin >> n;
    int *input = new int[n];
    for(int i = 0; i < n; i++) {
        cin >> input[i];
    }
    int x;
    cin >> x;
    int *output = new int[n];
    int size = allIndexes(input, n, x, output);
    for(int i = 0; i < size; i++) {
        cout << output[i] << " ";
    }
    delete [] input;
    delete [] output;
    return 0;
}
