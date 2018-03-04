#include <iostream>
#include <string>
using namespace std;

int main() {
	char str1[100],str2[100],temp;
	int length=0,i=0,j=0;
	cout<<"Entter the string to check\n";
	cin>>str1;
	while(str1[i]!='\0')
	{
		length+=1;
		i++;
	}
	str2[100]=str1[100];
	i=0;
	j=length-1;
	while(i<j)
	{
		temp=str1[i];
		str1[i]=str1[j];
		str1[j]=temp;
	}
	if(str1==str2)
	{
	cout<<"YES";
	}
	else 
	{
	cout<<"NO";
	}
	return 0;
}
