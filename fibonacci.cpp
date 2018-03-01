#include <iostream>
using namespace std;

int main() {
	int n,num=1,num1=0,num2,sum=0,i;
	cout<<"Enter a number\n";
	cin>>n;
	for(i=0;i<n;i++)
	{
		cout<<num<<" ";
		num2=num+num1;
		num1=num;
		num=num2;
		
	}
	
	return 0;
}
