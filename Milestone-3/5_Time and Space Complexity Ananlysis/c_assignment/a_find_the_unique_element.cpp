#include<bits/stdc++.h>
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl
#define endl "\n"
using ll=long long;
using namespace std;

int findUnique(int *arr, int n) 
{
    if(n==1)
    {
        return arr[0];
    }
    sort(arr,arr+n);
    for(int i=0;i<n;i++)
    {
        if(arr[i]!=arr[i+1]&&arr[i+1]!=arr[i+2])
        {
            return arr[i+1];
        }
    }
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int size;
        cin >> size;
        int *input = new int[size];

        for (int i = 0; i < size; ++i) {
            cin >> input[i];
        }

        cout << findUnique(input, size) << endl;
    }

    return 0;
}