#include <iostream>
using namespace std;

int pairSum(int *input, int size, int x)
{
    int no_of_pairs=0;
	for(int i=0;i<=size-1;i++){
        for(int j=0;j<=i-1;j++){
            if(input[i]+input[j]==x){
                no_of_pairs++;
            }
        }
        for(int j=i+1;j<=size-1;j++){
            if(input[i]+input[j]==x){
                no_of_pairs++;
            }
        }
    }
    return no_of_pairs/2;
}
int main()
{
	int t;
	cin >> t;

	while (t--)
	{
		int size;
		int x;

		cin >> size;
		int *input = new int[size];

		for (int i = 0; i < size; i++)
		{
			cin >> input[i];
		}

		cin >> x;

		cout << pairSum(input, size, x) << endl;

		delete[] input;
	}
	
	return 0;
}