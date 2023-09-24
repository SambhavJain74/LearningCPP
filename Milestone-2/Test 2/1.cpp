#include <iostream>

void print2DArray(int **input, int row, int col) 
{
	for(int i=0;i<row;i++)
    {   
        int temp=row-i;
        while(temp--)
        {
        for(int j=0;j<col;j++)
        {
            std::cout<<input[i][j]<<" ";
        }
        std::cout<<'\n';
        }
    }
}

using namespace std;

int main() {
    int row, col;
    cin >> row >> col;

    int **input = new int*[row];
    for(int i = 0; i < row; i++) {
	    input[i] = new int[col];
	    for(int j = 0; j < col; j++) {
	        cin >> input[i][j];
	    }
    }
    print2DArray(input, row, col);
}
