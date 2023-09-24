#include <iostream>
using namespace std;

int binarySearch(int input[], int size, int element,int ans=0) 
{
    if(size==0)
    {
        return -1;
    }
    if(input[size/2]==element)
    {
        int i=size/2;
        while(input[i-1]==element)
        {
            i--;
        }
        return ans+i;
    }
    else if(input[size/2]>element)
    {
        binarySearch(input,size/2,element,ans);
    }
    else
    {
        ans+=size/2+1;
        binarySearch(input+size/2+1,size-size/2-1,element,ans);
    }
}

int main() 
{
    int input[100000],length,element, ans;
    cin >> length;
    for(int i =0;i<length;i++)
    { 
        cin >> input[i];;
    }

    cin>>element;
    ans = binarySearch(input, length, element);
    cout<< ans << endl;
}
