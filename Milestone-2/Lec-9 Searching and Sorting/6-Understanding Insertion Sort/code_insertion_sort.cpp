#include <iostream>
using namespace std;

void insertionSort(int *input, int size) {
  for (int i = 1; i <= size - 1; i++) {
    for (int j = i - 1; j >= -1; j--) {
      if ((input[j + 1] >= input[i]) && (input[i] >= input[j])) {
        int t = input[i];
        for (int k = i - 1; k >= j + 1; k--) {
          input[k + 1] = input[k];
        }
        input[j + 1] = t;
      }
    }
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