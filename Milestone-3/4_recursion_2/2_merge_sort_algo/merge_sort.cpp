#include<bits/stdc++.h>
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl
#define endl "\n"
using ll=long long;
using namespace std;

void mergeSort(vector<int>& arr, int l, int r) 
{
    if(l>=r)
    {
        return;
    }
    int mid=(l+r)/2,size=r-l+1,sortedarr[size];
    mergeSort(arr,l,mid);
    mergeSort(arr,mid+1,r);
    for(int count=0,i=l,j=mid+1;count<size;count++)
    {
        if(j>r||(i<=mid&&arr[i]<=arr[j]))
        {
            sortedarr[count]=arr[i];
            i++;
        }
        else 
        {
            sortedarr[count]=arr[j];
            j++;
        }
    }
    for(int i=l;i<=r;i++)
    {
        arr[i]=sortedarr[i-l];
    }
    return;
}

class Runner 
{
    vector<int> v;
public:
    void takeInput() 
    {
        int n;
        cin >> n;
        v.assign(n, 0);
        for (int i = 0; i < n; ++i) {
        cin >> v[i];
        }
    }

    void execute() 
    {
        auto c = v;
        mergeSort(c, 0, (int)c.size() - 1);
    }

    void executeAndPrintOutput() {
        auto c = v;
        mergeSort(c, 0, (int)c.size() - 1);
        for (int i = 0; i < c.size(); ++i)
        cout << c[i] << ' ';
        cout << endl;
    }
};

int main() 
{
    Runner runner;
    runner.takeInput();
    runner.executeAndPrintOutput();
    return 0;
}