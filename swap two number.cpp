#include <iostream>
using namespace std;

int main() {
	int num1,num2,temp;
	cout<<"Enter any 2 numbers\n";
	cin>>num1>>num2;
	cout<<"Before swapping\n";
	cout<<num1<<"  "<<num2;
	temp=num1;
	num1=num2;
	num2=temp;
	cout<<"\nAfter swapping\n";
	cout<<num1<<"  "<<num2;
	return 0;
}
