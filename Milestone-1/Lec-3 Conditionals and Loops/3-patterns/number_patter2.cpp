#include <iostream>
using namespace std;
int main() {
  int n;
  cin >> n;
  for (int i = 1; i <= n; i++) {
    for(int s=1;s<=n-i;s++){
        cout<<" ";
    }
    for (int j = i; j <=2*i-1; j++) {
      cout << j;
    }
    cout << endl;
  }
  return 0;
}