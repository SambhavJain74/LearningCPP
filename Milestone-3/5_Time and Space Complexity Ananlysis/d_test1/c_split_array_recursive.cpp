#include <iostream>
using namespace std;

bool splitArray(int *input, int size, int dif=0)
 {
    if(size==0) 
    {
        return dif==0;
    }
    if(input[0]%5==0)
    {
        dif+=input[0];
    }
    else if(input[0]%3==0) 
    {
        dif-=input[0];
    }
    else
    {
        return (splitArray(input+1,size-1,dif+input[0])||splitArray(input+1,size-1,dif-input[0]));
    }
}

int main() {

	int size;
	cin>>size;
	int *input=new int[1+size];	
	
	for(int i=0;i<size;i++)
		cin>>input[i];
	
    if(splitArray(input, size)) {
        cout << "true" << endl;
    }
    else {
        cout << "false" << endl;
    }

	
	return 0;

}
