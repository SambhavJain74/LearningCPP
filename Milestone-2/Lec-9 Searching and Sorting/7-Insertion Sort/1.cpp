#include <iostream>
using namespace std;

void insertionSort(int *input, int size) {
  for(int i=1;i<=size-1;i++){
    int curr=input[i];
    int j=i-1;
    while(curr<input[j]){
        input[j+1]=input[j];
        j--;
    }
    input[j+1]=curr;
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

		insertionSort(input, size);

		for (int i = 0; i < size; i++)
		{
			cout << input[i] << " ";
		}

		delete[] input;
		cout << endl;
	}

	return 0;
}