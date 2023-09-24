#include <iostream>
using namespace std;

int tripletSum(int *input, int size, int x)
{
	int no_of_triplets=0;
	for(int i=0;i<=size-1;i++){
        for(int j=0;j<=i-1;j++){
            for(int k=0;k<=j-1;k++){
            if(input[i]+input[j]+input[k]==x){
                no_of_triplets++;
            }
            }
            for(int k=j+1;k<=i-1;k++){
            if(input[i]+input[j]+input[k]==x){
                no_of_triplets++;
            }
            }
            for(int k=i+1;k<=size-1;k++){
            if(input[i]+input[j]+input[k]==x){
                no_of_triplets++;
            }
            }
        }
        for(int j=i+1;j<=size-1;j++){
            for(int k=0;k<=i-1;k++){
            if(input[i]+input[j]+input[k]==x){
                no_of_triplets++;
            }
            }
            for(int k=i+1;k<=j-1;k++){
            if(input[i]+input[j]+input[k]==x){
                no_of_triplets++;
            }
            }
            for(int k=j+1;k<=size-1;k++){
            if(input[i]+input[j]+input[k]==x){
                no_of_triplets++;
            }
            }
        }
    }
    return no_of_triplets/6;
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

		cout << tripletSum(input, size, x) << endl;

		delete[] input;
	}

	return 0;
}