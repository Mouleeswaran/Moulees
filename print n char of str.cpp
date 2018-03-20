#include <iostream>
using namespace std;

int main() {
	char str[100];
	int i,N,length=0;
	cout<<"Enter the string\n";
	cin>>str;
	cout<<"Enter the value of N\n";
	cin>>N;
	while(str[i]!='\0')
	{
		length+=1;
		i++;
	}
	length--;
	for(i=0;i<N;i++)
	{
		cout<<str[length];
		length--;
	}
	return 0;
}
