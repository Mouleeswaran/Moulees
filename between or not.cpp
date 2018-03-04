#include <iostream>
using namespace std;

int main() {
	int num1,num2,num3;
	cout<<"Enter first number\n";
	cin>>num1;
	cout<<"Enter two numbers for range\n";
	cin>>num2>>num3;
	if(num1<=num2&&num1>=num3)
	{
		cout<<"YES";
	}
	else
	{
		cout<<"NO";
	}
	return 0;
}
