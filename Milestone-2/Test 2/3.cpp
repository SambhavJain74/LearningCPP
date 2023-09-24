#include<iostream>
#include<climits>
using namespace std;

void Leaders(int* arr,int len)
{
	for(int i=0;i<len;i++)
    {
        bool shall_print=true;
        for(int j=i+1;j<len;j++)
        {
            if(arr[j]>arr[i])
            {
                shall_print=false;
                break;
            }
        }
        if(shall_print)
        {
            cout<<arr[i]<<' ';
        }
    }
}


int main()
{
    int len;
    cin>>len;
	int *arr = new int[len + 1];
	
	for(int i=0;i<len;i++)
	{
		cin>>arr[i];
	}
	Leaders(arr,len);
}
