#include<iostream>
using namespace std;

int subset(int input[], int n, int output[][20],int previous[20]={0},int size_previous=0,int curr_output_index=0) 
{
    if(n==1)
    {
        output[curr_output_index][0]=size_previous+1;
        for(int i=1;i<size_previous+1;i++)
        {
            output[curr_output_index][i]=previous[i-1];
        }
        output[curr_output_index][size_previous+1]=input[0];
        curr_output_index++;

        output[curr_output_index][0]=size_previous;
        for(int i=1;i<size_previous+1;i++)
        {
            output[curr_output_index][i]=previous[i-1];
        }
        curr_output_index++;

        return curr_output_index;
    }
    int new_previous[20];
    int new_size_previous=size_previous;
    for(int i=0;i<size_previous;i++)
    {
        new_previous[i]=previous[i];
    }
    new_previous[new_size_previous]=input[0];
    new_size_previous++;

    curr_output_index=subset(input+1,n-1,output,previous,size_previous,curr_output_index);
    curr_output_index=subset(input+1,n-1,output,new_previous,new_size_previous,curr_output_index);
    return curr_output_index;
}


int main() 
{
    int input[20],length, output[35000][20];
    cin >> length;
    for(int i=0; i < length; i++)
    {
        cin >> input[i];
    }
    int size = subset(input, length, output);
    for( int i = 0; i < size; i++) 
    { 
        for( int j = 1; j <= output[i][0]; j++) 
        { 
            cout << output[i][j] << " ";
        }
        cout << endl;
    }
}
