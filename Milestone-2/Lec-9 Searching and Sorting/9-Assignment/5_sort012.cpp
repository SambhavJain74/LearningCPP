#include <iostream>
#include <algorithm>
using namespace std;

REATTEMPT

void sort012(int *arr, int n)
{   
    for(int i=0,n0=0,n1=0,n2=0;i<=n-2;i++){
        if(arr[i]==0){
            arr[i]=arr[n0];
            arr[n0]=0;
            n0++;
        }
        if(arr[i]==1){
            arr[i]=arr[n0+n1];
            arr[n0+n1]=1;
            n1++;
        }
        if(arr[i]==2){
            arr[i]=arr[n0+n1+n2];
            arr[n0+n1+n2]=2;
            n2++;
        }
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

		sort012(arr, size);

		for (int i = 0; i < size; i++)
		{
			cout << arr[i] << " ";
		}

		delete[] arr;
		cout << endl;
	}

	return 0;
}