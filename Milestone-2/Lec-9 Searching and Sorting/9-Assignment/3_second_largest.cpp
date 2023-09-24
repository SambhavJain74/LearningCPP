#include <iostream>
using namespace std;

int findSecondLargest(int *input, int n) {
    if (n <= 1)
    {
        return -2147483648;
    }
    int largest=-1, second;
    for(int i=0; i<=n-1;i++)
    {
        if(input[i]>largest){
        second=largest;
        largest=input[i];
        } 
        else if((input[i]>second)&&(input[i]!=largest)) 
        {
        second=input[i];
        }
    }
    if(second==-1){
        return -2147483648;
    }
    return second;
}

int main()
{
	int t;
	cin >> t;
	while (t--)
	{

		int size;
		cin >> size;
		int *input = new int[size];

		for (int i = 0; i < size; i++)
		{
			cin >> input[i];
		}

		cout << findSecondLargest(input, size) << endl;

		delete[] input;
	}

	return 0;
}