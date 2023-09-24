#include <iostream>
using namespace std;

void rotate(int *input, int d, int n)
{   
    int array2[n];
    int j=0;
    for(int i=d;i<=n-1;i++,j++){
        array2[j]=input[i];
    }
    for(int i=0;i<=d-1;i++,j++){
        array2[j]=input[i];
    }
    for(int i=0;i<=n-1;i++){
        input[i]=array2[i];
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

		int d;
		cin >> d;

		rotate(input, d, size);

		for (int i = 0; i < size; ++i)
		{
			cout << input[i] << " ";
		}
		
		delete[] input;
		cout << endl;
	}

	return 0;
}