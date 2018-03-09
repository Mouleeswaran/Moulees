#include <iostream>
using namespace std;

int main() {
	int num1,num2=1;
	cout<<"Enter numbers\n";
	cin>>num1;
	while(num1!=0)
	{
		num2=num2*(num1%10);
		num1=num1/10;
	}
	cout<<num2;
	return 0;
}
