#include <iostream>
using namespace std;

int main() {
	char st[100];
	int count=0,i;
	cout<<"Enter the string\n";
	cin>>st;
	for(i=0;st[i]=!'\0';i++)
	{
		if(st[i]==' ')
		{
			count++;
		}
	}
	cout<<count<<" Space";
	return 0;
}
