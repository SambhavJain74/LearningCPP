#include <iostream>
#include <algorithm>
using namespace std;

void sortZeroesAndOne(int *input, int size)
{   int no_of_zeros=0;
    for(int i=0;i<=size-1;i++){
        if(input[i]==0){
            no_of_zeros++;
        }
    }
    for(int i=0;i<=no_of_zeros-1;i++){
        input[i]=0;
    }
    for(int i=no_of_zeros;i<=size-1;i++){
        input[i]=1;
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
		int *input = new int[size];

		for (int i = 0; i < size; ++i)
		{
			cin >> input[i];
		}

		sortZeroesAndOne(input, size);

		for (int i = 0; i < size; ++i)
		{
			cout << input[i] << " ";
		}

		cout << endl;
		delete[] input;
	}

	return 0;
}