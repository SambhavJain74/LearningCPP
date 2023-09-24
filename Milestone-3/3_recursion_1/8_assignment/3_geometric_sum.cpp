#include <iostream>
#include <math.h>
#include <iomanip>

double geometricSum(int k) 
{
    if(k==0)
    {
        return 1;
    }
    return (1/(pow(2,k)))+geometricSum(k-1);
}

using namespace std;

int main() {
    int k;
    cin >> k;
    cout << fixed << setprecision(5);
    cout << geometricSum(k) << endl;   
}
