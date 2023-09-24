#include <iostream>
using namespace std;
int main() {
  long long n, bin = 0, t = 1;
  cin >> n;
  while(n>0){
    bin+=(n%2)*t;
    n /=2;
    t *= 10;
  }
  cout << bin;
  return 0;
}