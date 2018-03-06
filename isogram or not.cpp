#include <iostream>
using namespace std;

int main() {
	char str[100];
	int i=0,count=0,length=0;
	cout<<"Enter the string\n";
	cin>>str;
	while(str[i]!='\0')
	{
		length+=1;
		i++;
	}
	for(i=0;i<length;i++)
	{
		for(int j=i+1;j<length;j++)
		{
			if(str[i]==str[j])
			{
				count+=1;
			}
		}
	}
	if(count==0)
	{
		cout<<"YES";
	}
	else
	{
		cout<<"NO";
	}
	return 0;
}
