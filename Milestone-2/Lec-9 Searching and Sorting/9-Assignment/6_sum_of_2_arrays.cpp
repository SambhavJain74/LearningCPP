#include <iostream>
using namespace std;

void sumOfTwoArrays(int *input1, int size1, int *input2, int size2, int *output)
{
    int sum1=0,sum2=0,sum=0;
    for(int i=0;i<=size1-1;i++){
        (sum1*=10)+=input1[i];
    }
    for(int i=0;i<=size2-1;i++){
        (sum2*=10)+=input2[i];
    }
    sum=sum1+sum2;
    int i=max(size1,size2);
    for(;sum>=10;i--){
        output[i]=sum%10;
        sum/=10;
    }
    output[i]=sum;

}

int main()
{
	int t;
	cin >> t;

	while (t--)
	{
		int size1;
		cin >> size1;

		int *input1 = new int[size1];

		for (int i = 0; i < size1; ++i)
		{
			cin >> input1[i];
		}

		int size2;
		cin >> size2;

		int *input2 = new int[size2];

		for (int i = 0; i < size2; ++i)
		{
			cin >> input2[i];
		}

		int outsize = 1 + max(size1, size2);

		int *output = new int[outsize];

		sumOfTwoArrays(input1, size1, input2, size2, output);

		for (int i = 0; i < outsize; ++i)
		{
			cout << output[i] << " ";
		}

		delete[] input1;
		delete[] input2;
		delete[] output;
		cout << endl;
	}

	return 0;
}