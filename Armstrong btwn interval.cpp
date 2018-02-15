#include <iostream>
using namespace std;

int main() {
	int num1,num2,temp,digit,sum,i;
	cout<<"Enter two numbers\n";
	cin>>num1>>num2;
	while(num1<num2)
	{
		num1=temp;
		sum=0;
		while(temp!=0)
		{
			digit=temp%10;
			sum+=digit*digit*digit;
			temp=temp/10;
		}
		if(num1==sum)
		{
			cout<<num1;
		}
		num1++;
	}
	return 0;
}
