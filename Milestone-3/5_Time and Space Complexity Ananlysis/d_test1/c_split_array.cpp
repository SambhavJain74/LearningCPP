#include<bits/stdc++.h>
using namespace std;

bool splitArray(int *input, int size) 
{
    int five=0,three=0,othersum=0;
    int other[size]={0};
    int len=0;
    for(int i=0;i<size;i++)
    {
        if(input[i]%5==0)
        {
            five+=input[i];
        }
        else if(input[i]%3==0)
        {
            three+=input[i];
        }
        else
        {   other[len]=input[i];
            othersum+=input[i];
            len++;
        }
    }
    if((othersum+three+five)%2)
    {
        return false;
    }
    if(len==0)
    {
        if(five-three)
        {
            return false;
        }
        else
        {
            return true;
        }
    }
    int sizearr=pow(2,len);
    int arr[sizearr];
    arr[0]=five-three;
    int curr=1;
    for(int i=0;i<len;i++)
    {
        int j=0;
        for(;j<curr;j++)
        {
            arr[j+curr]=arr[j]-other[i];
            arr[j]+=other[i];
        }
        curr*=2;
    }
    for(int i=0;i<curr;i++)
    {
        if(arr[i]==0)
        {
            return true;
        }
    }
    return false;
}

int main() 
{
	int size;
	cin>>size;
	int *input=new int[1+size];	
	for(int i=0;i<size;i++)
    {
		cin>>input[i];
    }
    if(splitArray(input, size)) 
    {
        cout << "true" << endl;
    }
    else 
    {
        cout << "false" << endl;
    }
	return 0;
}