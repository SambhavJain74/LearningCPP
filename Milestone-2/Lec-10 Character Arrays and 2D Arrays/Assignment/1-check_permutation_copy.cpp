#include <iostream>
#include <cstring>
using namespace std;

bool isPermutation(char input1[], char input2[]) {
  bool isp = false;
   for (int i = 0; i < strlen(input1); i++) 
   {
       isp=false;
    for (int j = 0; j < strlen(input2); j++) 
    {
      if (input1[i] == input2[j]) 
      {
        isp = true;
        input2[j]='A';
        break;
      }
      }
      if (!isp) {
        return false;
      }
  }
  if(isp)
  {
      return true;
  }
}

int main() 
{
    int size = 1e6;
    char str1[size];
    char str2[size];
    cin >> str1 >> str2;
    cout << (isPermutation(str1, str2) ? "true" : "false");
}