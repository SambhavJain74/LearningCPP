#include<bits/stdc++.h>
#include<algorithm>
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl
#define endl "\n"
using ll=long long;
using namespace std;

#include<bits/stdc++.h>
using namespace std;
int tripletSum(int *arr, int n, int num, int ans=0)
{
	sort(arr,arr+n);
	vector<int> vect={arr[0]};
	vector<int> freq={1};
	int vectsize=1;
	for(int i=1;i<n;i++)
	{
		if(arr[i]==vect[vectsize-1])
		{
			freq[vectsize]++;
		}
		else
		{
			vect.push_back(arr[i]);
            freq.push_back(1);
			vectsize++;
		}
	}
	for(int i=0;i<vectsize-2;i++)
	{
        if(freq[i]>2&&vect[i]*3==num)
        {
            ans+=freq[i]*(freq[i]-1)*(freq[i]-2)/6;
        }
        if(freq[i]>1)
        {
            int ptr=lower_bound(vect.begin()+i+1,vect.end(),num-2*vect[i])-vect.begin();
            if(ptr>i&&vect[ptr]==num-2*vect[i])
			{
				ans+=(freq[i]*(freq[i]-1)*freq[ptr])/2;
			}
        }
        if((num-vect[i])%2==0)
        {
            int ptr=lower_bound(vect.begin()+i+1,vect.end(),(num-vect[i])/2)-vect.begin();
            if(ptr>i&&vect[ptr]==num-2*vect[i]&&freq[ptr]>1)
			{
				ans+=(freq[ptr]*(freq[ptr]-1)*freq[i])/2;
			}            
        }
		for(int j=i+1;j<vectsize-1;j++)
		{
			int ptr=lower_bound(vect.begin()+j+1,vect.end(),num-vect[i]-vect[j])-vect.begin();
			if(ptr>j&&vect[ptr]==num-vect[i]-vect[j])
			{
				ans+=freq[i]*freq[j]*freq[ptr];
			}
		}
	}
	return ans;
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