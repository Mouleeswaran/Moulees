#include <iostream>
using namespace std;

int main() {
	int num;
	cout<<"Enter the Number to check\n";
	cin>>num;
	if(num!=0)
	{
	if(num%2==0)
	{
		cout<<"The Number even";
	}
	else
	{
		cout<<"The number is odd";
	}
	}
	else
	{
		cout<<"Enter valied positive integer";
	}
	return 0;
}
