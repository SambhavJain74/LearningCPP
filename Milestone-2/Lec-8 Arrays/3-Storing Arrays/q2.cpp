#include <iostream>
using namespace std;

void arrange(int *arr, int n){
  for (int i = 0; i <= n / 2 + n % 2 - 1; i++) {
    arr[i] = 2 * i +1;
  }
  for (int i = n / 2 + n % 2; i <=n-1; i++) {
    arr[i] = (n - i) * 2;
  }
}


int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int n;
		cin >> n;

		int *arr = new int[n];
		arrange(arr, n);
		for (int i = 0; i < n; i++)
		{
			cout << arr[i] << " ";
		}
		cout << endl;
		delete [] arr;
	}

	
}