#include <iostream>
using namespace std;

int binarySearch(int *input, int n, int val, int s=0)
{
    //end=n-1
    int start=s;
    if(start>n){
        return -1;
    }
    if(input[(n+start)/2]==val){
        return (n+start)/2;
    }
    else if(input[(n+start)/2]>val){
        n=(n+start)/2-1;
        binarySearch(input,n,val,start);
    }
    else if(input[(n+start)/2]<val){
        start=(n+start)/2+1;
        binarySearch(input,n,val,start);
}
}

int main()
{

	int size;
	cin >> size;
	int *input = new int[size];

	for(int i = 0; i < size; ++i)
	{
		cin >> input[i];
	}
	
	int t;
	cin >> t;

	while (t--)
	{
		int val;
		cin >> val;
		cout << binarySearch(input, size, val) << endl;
	}
	
	delete [] input;
	return 0;
}