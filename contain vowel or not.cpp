#include <iostream>
using namespace std;

int main() {
	char str[100];
	bool temp=false;
	cout<<"Enter a string\n";
	cin>>str;
	for(int i=0;i!='\0';i++)
	{
		if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u')
		{
		temp=true;
		}
	}
	if(temp==true)
	{
		cout<<"YES";
	}
	else
	{
		cout<<"NO";
	}
	return 0;
}
