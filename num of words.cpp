#include <iostream>
using namespace std;

int main() {
	char st[100];
	int count=1,j;
	cout<<"Enter the string\n";
	cin>>st;
	for(j=0;st[j]!='\0';j++)
	{
		if(st[j]==' ')
		{
			count++;
		}
	}
	cout<<count<<" Words";
	return 0;
}
