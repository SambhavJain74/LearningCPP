#include <iostream>
#include <algorithm>
using namespace std;

void sort012(int *arr, int n)
{   
    int n0=0,n1=0;
    for(int i=0;i<=n-1;i++){
        if(arr[i]==0){
            arr[n0]=0;
            n0++;
        }
        else if(arr[i]==1){
            n1++;
        }
    }
    for(int i=n0;i<=n0+n1;i++){
        arr[i]=1;
    }
    for(int i=n0+n1;i<=n-1;i++){
        arr[i]=2;
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