#include <iostream>
using namespace std;

int duplicateNumber(int *arr, int size)
{
    for(int i=0;i<=size-1;i++){
        for(int j=0;j<=i-1;j++){
            if(arr[j]==arr[i]){
                return arr[i];
            }
        }
        for (int j = i+1; j <= size - 1; j++) {
          if (arr[j] == arr[i]) {
            return arr[i];
          }
        }
    }
    return -1;
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

		cout << duplicateNumber(input, size) << endl;
	}

	return 0;
}