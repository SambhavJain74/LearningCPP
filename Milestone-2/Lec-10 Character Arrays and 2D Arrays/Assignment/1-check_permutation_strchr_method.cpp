#include <iostream>
#include <cstring>
using namespace std;

bool isPermutation(char input1[], char input2[]) 
{
  for (int i = 0; i < strlen(input1); i++) 
  {
    char *ptr;
    ptr = strchr(input2, input1[i]);
    if(ptr==0)
    {
      return false;
    }
    *ptr='A';
  }
  return true;
}
int main()
{
    int size = 1e6;
    char str1[size];
    char str2[size];
    cin >> str1 >> str2;
    cout << (isPermutation(str1, str2) ? "true" : "false");
}