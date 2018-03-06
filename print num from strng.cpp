#include <iostream>
using namespace std;

int main() {
	char str[100];
	int count=0,i=0;
	cout<<"Enter the string\n";
	cin>>str;
	while(str[i]!='\0')
	{
		count+=1;
		i++;
	}
	for(i=0;i<count;i++)
	{
		if((int(str[i])<45)||(int(str[i])>91)||(int(str[i])<97)||(int(str[i])>123))
		{
			cout<<str[i];
		}
	}
	return 0;
}
