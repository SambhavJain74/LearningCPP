#include <iostream>
using namespace std;

/*
You can use minimum value of integer as -2147483647 and 
maximum value of integer as 2147483647
*/
void findLargest(int **input, int n, int m)
{
  if(n==0&&m==0)
  {
    cout << "row 0 -2147483648"<<endl;;
    return;
  }
  int rowindex=0;
  int columnindex=0;
  int rsum1=0;
  int rsum2=0;
  int csum1=0;
  int csum2 = 0;
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      rsum2 += input[i][j];
    }
    if (rsum2 > rsum1) {
      rsum1 = rsum2;
      rowindex=i;
    }
    rsum2=0;
    }
    for (int j = 0;j < m; j++) {
      for (int i = 0; i < n; i++) {
        csum2 += input[i][j];
      }
      if (csum2 > csum1) {
        csum1 = csum2;
        columnindex=j;
      }
      csum2=0;
    }
    if(rsum1>=csum1)
    {   
        cout<<"row "<<rowindex<<" "<<rsum1<<endl;
    }
    else{
      cout << "column " << columnindex << " " << csum1<<endl;;
    }
}

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int row, col;
		cin >> row >> col;

		int **input = new int *[row];
		for (int i = 0; i < row; i++)
		{
			input[i] = new int[col];
			for (int j = 0; j < col; j++)
			{
				cin >> input[i][j];
			}
		}

		findLargest(input, row, col);
		cout << endl;
	}
}