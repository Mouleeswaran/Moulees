#include <iostream>
#include <math.h>
using namespace std;

int main() {
	int num1, num2,product,temp;
	float sqroot;
	cout<<"Enter two numbers\n";
	cin>>num1>>num2;
	product=num1*num2;
	sqroot=sqrt(product);
	temp=sqroot;
	if(temp==sqroot)
	{
		cout<<"YES";
	}
	else
	{
		cout<<"NO";
	}
	return 0;
}
