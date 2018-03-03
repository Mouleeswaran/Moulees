#include <iostream>
using namespace std;

int main() {
	char str[100];
	int i=0,count;
	cout<<"Enter the string\n";
	cin>>str;
	while(str[i]!='\n')
	{
		count=0;
		if(str[i]==1||str[i]==0)
		{
			count=1;
		}
		i++;
	}
	if(count==1)
	{
	            cout<<"YES";
	}
	else
	{
		cout<<"NO";
	}
	return 0;
}
