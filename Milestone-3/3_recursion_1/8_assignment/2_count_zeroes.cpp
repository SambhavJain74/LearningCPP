#include <iostream>

int countZeros(int n) 
{
    if(n<=9)
    {
        if(n==0)
        {
            return 1;
        }
        return 0;
    }
    if(n%10==0)
    {
        return 1+countZeros(n/10);
    }
    return countZeros(n/10);
}

using namespace std;

int main() {
    int n;
    cin >> n;
    cout << countZeros(n) << endl;
}
