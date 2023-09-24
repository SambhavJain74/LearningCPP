#include <iostream>
using namespace std;

int arrayRotateCheck(int *input, int size)
{   
    if (size==0){
        return 0;
    }
    int i=1;
    while((i<=size-1)&&(!((input[i]<input[i-1])&&(input[i]<input[i+1])))){
        i++;
    }
    return i%(size);
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