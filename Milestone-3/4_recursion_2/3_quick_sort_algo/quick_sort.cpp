#include<iostream>
using namespace std;

void quickSort(int input[], int size) 
{
    if(size<=1)
    {
        return;
    }
    int temp=input[0],index=0,dist_last=0,transfer=0;
    for(int i=1;i<size-dist_last;i++)
    {
        if(input[i]<=temp)
        {
            index++;
        }
        else
        {
            transfer=input[i];
            input[i]=input[size-dist_last-1];
            input[size-dist_last-1]=transfer;
            dist_last++;
            i--;
        }
    }
    input[0]=input[index];
    input[index]=temp;
    quickSort(input,index);
    quickSort(input+index+1,size-index-1);
}

int main()
{
    int n;
    cin >> n;
  
    int *input = new int[n];
    
    for(int i = 0; i < n; i++) 
    {
        cin >> input[i];
    }
    
    quickSort(input, n);
    for(int i = 0; i < n; i++) 
    {
        cout << input[i] << " ";
    }
    
    delete [] input;

}


