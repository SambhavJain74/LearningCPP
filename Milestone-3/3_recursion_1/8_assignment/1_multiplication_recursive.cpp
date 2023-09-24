#include <iostream>

int multiplyNumbers(int m, int n) 
{
    if(n==0)
    {
        return 0;
    }
    return m+multiplyNumbers(m,n-1);
}

using namespace std;

int main() {
    int m, n;
    cin >> m >> n;
    cout << multiplyNumbers(m, n) << endl;
}
