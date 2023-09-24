#include <iostream>

int findUnique(int *arr, int size)
{
    for(int i=0;i<=size;i++){
        bool is_unique=true;
        for(int j=0;j<=i-1;j++){
            if(arr[j]==arr[i]){
                is_unique=false;
            }
        }
        if(is_unique==true){
        for (int j = i+1; j <=size-1; j++) {
          if (arr[j] == arr[i]) {
            is_unique = false;
          }
        }
        }
        if (is_unique==true){
            return arr[i];
        }
    }
}

using namespace std;

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

		cout << findUnique(input, size) << endl;
	}

	return 0;
}