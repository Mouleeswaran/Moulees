#include <iostream>
using namespace std;

int main() {
	int num1,num2;
	cout<<"Enter 2 numbers to swap\n";
	cin>>num1>>num2;
	cout<<"Before swapping: "<<num1<<" "<<num2<<"\n";
	num1=num1^num2;
	num2=num1^num2;
	num1=num1^num2;
	cout<<"After swapping: "<<num1<<" "<<num2;
	return 0;
}
