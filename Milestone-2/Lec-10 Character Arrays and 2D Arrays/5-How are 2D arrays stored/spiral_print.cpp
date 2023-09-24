#include <iostream>
using namespace std;

void spiralPrint(int **input, int m, int n)
{
    int curr=1,startrow=0,endrow=m-1,startcol=0,endcol=n-1,i=0,j=0;
    int t=m*n;
    while(curr<=t)
    {
        while((startcol<=j)&&(j<=endcol))
        {
            cout<<input[i][j]<<" ";
            //cout<<"("<<i<<","<<j<<") ";                                  //
            j++,curr++;
        }
        if(curr>t)
        {
            break;
        }
        //cout<<endl;                                                      //
        i++,j--,startrow++;

        while((startrow<=i)&&(i<=endrow))
        {
            cout<<input[i][j]<<" ";
            //cout<<"("<<i<<","<<j<<") ";                                  //
            i++,curr++;
        }
        if(curr>t)
        {
            break;
        }
        //cout<<endl;                                                      //
        j--,i--, endcol--;

        while((startcol<=j)&&(j<=endcol))
        {
            cout<<input[i][j]<<" ";
            //cout<<"("<<i<<","<<j<<") ";                                  //
            j--,curr++;
        }
        if(curr>t)
        {
            break;
        }
        //cout<<endl;                                                      //
        i--,j++,endrow--;

        while((startrow<=i)&&(i<=endrow))
        { 
            cout<<input[i][j]<<" ";
            //cout<<"("<<i<<","<<j<<") ";                                  //
            i--,curr++;
        }
        if(curr>t)
        {
            break;
        }
        //cout<<endl;                                                      //
        j++,i++,startcol++;
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
        int **matrix = new int *[row];

        for (int i = 0; i < row; i++)
        {
            matrix[i] = new int[col];
            for (int j = 0; j < col; j++)
            {
                cin >> matrix[i][j];
            }
        }
        spiralPrint(matrix, row, col);

        for (int i = 0; i < row; ++i)
        {
            delete[] matrix[i];
        }
        delete[] matrix;

        cout << endl;
    }
}