#include<bits/stdc++.h>
#include<algorithm>
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl
#define endl "\n"
using ll=long long;
using namespace std;

int tripletSum(int *arr, int n, int num)
{
    int count=0;
    sort(arr,arr+n);
	for(int i=0;i<=n-3;i++)
    { 
        if(arr[i]+arr[i+1]+arr[i+2]>num)
		{
            return count;
			break;
		}
        for(int j=i+1;j<=n-2;j++)
        {
            if(arr[i]+arr[j]+arr[j+1]>num)
			{
                n=j+1;
				break;
			}
            for(int k=j+1;k<=n-1;k++)
            {
                if(arr[i]+arr[j]+arr[k]==num)
                {
                    count++;
                }
                else if(arr[i]+arr[j]+arr[k]>num)
                {
                    n=k;
                    break;
                }
            }
        }
    }
    return count;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
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
		cout << tripletSum(input, size, x) << endl;
		delete[] input;
	}
	return 0;
}