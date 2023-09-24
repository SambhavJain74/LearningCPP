#include<bits/stdc++.h>
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl
#define endl "\n"
using ll=long long;
using namespace std;
#include <algorithm>

int pairSum(int *arr, int n, int num)
{
    int count=0;
    sort(arr,arr+n);
    for(int i=0;i<n;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			if(arr[i]+arr[j]==num)
			{
				count++;
			}
			else if(arr[i]+arr[j]>num)
			{
				break;
			}
		}
	}
	return count;
}

int main()
{
	int t;
	cin >> t;

	while (t--)
	{
		int size;
		int x;

		cin >> size;
		int *input = new int[size];

		for (int i = 0; i < size; i++)
		{
			cin >> input[i];
		}

		cin >> x;

		cout << pairSum(input, size, x) << endl;

		delete[] input;
	}
	
	return 0;
}