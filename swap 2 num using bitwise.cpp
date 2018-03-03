#include <iostream>
using namespace std;

int main() {
	int n1,n2;
	cout<<"Enter 2 numbers to swap\n";
	cin>>n1>>n2;
	cout<<"Before swapping: "<<n1<<" "<<n2<<"\n";
	n1=n1^n2;
	n2=n1^n2;
	n1=n1^n2;
	cout<<"After swapping: "<<n1<<" "<<n2;
	return 0;
}
