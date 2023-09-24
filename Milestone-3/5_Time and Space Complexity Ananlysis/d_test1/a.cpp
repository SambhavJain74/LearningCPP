#include<iostream>
using namespace std;

bool checksequenece(char large[] , char*small) 
{
    if(small[0]=='\0')
    {
        return true;
    }
    int i=0;
    while(small[0]!='\0'&&small[0]!=large[i])
    {
        i++;
    }
    if(small[i]=='\0')
    {
        return false;
    }
    checksequenece(large+1,small+1);
}


int main()
{
	char large[10000];
	char small[10000];
	cin>>large;
	cin>>small;
	bool x=checksequenece(large , small);

	if(x)
		cout<<"true";
	else
		cout<<"false";

}
