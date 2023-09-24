#include <iostream>
using namespace std;

void pushZeroesEnd(int *input, int size)
{   int j=0;
    for(int i=0;i<=size-1;i++){
        if(input[i]!=0){
            input[j]=input[i];
            j++;
        }
    }
    for(;j<=size-1;j++){
        input[j]=0;
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

		for (int i = 0; i < size; i++)
		{
			cin >> input[i];
		}

		pushZeroesEnd(input, size);

		for (int i = 0; i < size; i++)
		{
			cout << input[i] << " ";
		}

		cout << endl;
		delete[] input;
	}

	return 0;
}