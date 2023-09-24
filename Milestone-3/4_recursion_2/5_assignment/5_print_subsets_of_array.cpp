#include <iostream>
using namespace std;

void printSubsetsOfArray(int input[], int size, int previous[1000]={0},int size_previous=0) 
{
    if(size==1)
    {
        for(int i=0;i<size_previous;i++)
        {
            cout<<previous[i]<<" ";
        }
        cout<<input[0]<<endl;
        for(int i=0;i<size_previous;i++)
        {
            cout<<previous[i]<<" ";
        }
        cout<<endl;
        //cout<<"here"<<endl;                                       //
        return;
    }
    //cout<<"yahan to hunga hi"<<endl;                              //
    int new_previous[1000];
    int new_size_previous=size_previous;
    for(int i=0;i<size_previous;i++)
    {
        new_previous[i]=previous[i];
    }
    new_previous[new_size_previous]=input[0];
    new_size_previous++;
    //cout<<"Yahan bhi"<<endl;                                          //

    printSubsetsOfArray(input+1,size-1,previous,size_previous);
    //cout<<"now here"<<endl;                                           //
    printSubsetsOfArray(input+1,size-1,new_previous,new_size_previous);
    //cout<<"idhar brother"<<endl;                                      //
    return;
}


int main() 
{
    int input[1000],length;
    cin >> length;
    for(int i=0; i < length; i++)
    {
        cin >> input[i];
    }
    printSubsetsOfArray(input, length);
}
