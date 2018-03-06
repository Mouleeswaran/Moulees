#include <iostream>
using namespace std;

int main() {
	char str[50],str1[50],str2[50];
	int i=0,length=0,j=0,k=0;
	cout<<"Enter the strng\n";
	cin>>str;
	while(str[i]!='\0')
	{
		length+=1;
		i++;
	}
	for(i=0;i<length;i++)
	{
		if(i%2==0)
		{
			str1[j]=str[i];
			j++;
		}
		else
		{
			str2[k]=str[i];
			k++;
		}
	}
	cout<<str1<<"  "<<str2;
	return 0;
}
