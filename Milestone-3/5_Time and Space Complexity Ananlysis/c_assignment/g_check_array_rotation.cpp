#include <iostream>
using namespace std;

int arrayRotateCheck(int *input, int size)
{
    int i=0;
    while(i<size-1&&input[i]<=input[i+1])
    {
        i++;
    }
    if(i>=size-1)
    {
        return  0;
    }
    return i+1;
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

		cout << arrayRotateCheck(input, size) << endl;
		delete[] input;
	}
	
	return 0;
}