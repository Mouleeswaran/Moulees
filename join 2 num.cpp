#include <iostream>
using namespace std;

int main() {
	int num1,num2,temp=0,temp2;
	cout<<"Enter two numbers \n";
	cin>>num1>>num2;
	while(num2!=0)
	{
		temp=(temp*10)+(num2%10);
		num2=num2/10;
	}
	while(temp!=0)
	{
		temp2=temp%10;
		num1=(num1*10)+temp2;
		temp=temp/10;
	}
	cout<<num1;
	return 0;
}
