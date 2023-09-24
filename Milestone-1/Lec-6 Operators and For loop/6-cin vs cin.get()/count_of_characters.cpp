#include<iostream>
using namespace std;
int main(){
	char c;
	int count_of_characters=0, count_of_digits=0, count_of_whitespaces=0;
	c=cin.get();
	while(c!='$'){
		if((int(c)>=97)&&(int(c)<=122)){
			count_of_characters++;
		}
		if ((int(c)>=48)&&(int(c)<=57)){
			count_of_digits++;
		}
		if ((int(c)==32)||(c=='\t')||(c=='\n')){
			count_of_whitespaces++;
		}
		c=cin.get();
	}
	cout<<count_of_characters<<" "<<count_of_digits<<" "<<count_of_whitespaces;
}