#include <iostream>
using namespace std;

void swapAlternate(int *arr, int size)
{
    for(int i=0;i<=size-2;i+=2){
        arr[i]=arr[i]+arr[i+1];
        arr[i+1]=arr[i]-arr[i+1];
        arr[i]=arr[i]-arr[i+1];
    }
}

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int size;
		cin >> size;
		int *arr = new int[size];
		for (int i = 0; i < size; i++)
		{
			cin >> arr[i];
		}
		swapAlternate(arr, size);
		for (int i = 0; i < size; i++)
		{
			cout << arr[i] << " ";
		}
		cout << endl;
		delete [] arr;
	}
}