#include <iostream>
#include <cstring>
using namespace std;

 char highestOccurringChar(char input[]) {
    int freq[256] = {0};
    int indices[256];
    for(int i = 0; i < 256; i++) {
        indices[i] = -1;
    }
    for(int i = 0; input[i] != '\0'; i++) {
        int index = input[i];
        freq[index]++;
        if(indices[index] == -1) {
            indices[index] = i;
        }
    }
    int maxIndex = 0;
    for(int i = 0; i < 256; i++) {
        if(freq[i] > freq[maxIndex]) {
            maxIndex = i;
        }
        else if(freq[i] == freq[maxIndex]) {
            if(indices[i] < indices[maxIndex]) {
                maxIndex = i;
            }
        }
    }
    return (char)maxIndex;
}
int main() {
    int size = 1e6;
    char str[size];
    cin >> str;
    cout << highestOccurringChar(str);
}