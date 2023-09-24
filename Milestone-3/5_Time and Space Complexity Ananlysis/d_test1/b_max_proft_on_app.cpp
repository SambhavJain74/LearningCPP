#include<bits/stdc++.h>
using namespace std;

int maximumProfit(int budget[], int n) 
{
    sort(budget,budget+n);
    int answer=0;
    for(int i=0;i<n;i++)
    {
        budget[i]=(n-i)*budget[i];
        answer=max(answer,budget[i]);
    }
    return answer;
}


int main() {
    int n ,*input,i,*cost;
    cin>>n;
    input = new int[n];
    for(i = 0;i < n;i++)
        cin>>input[i];
    
    cout << maximumProfit(input, n) << endl;
    
}
