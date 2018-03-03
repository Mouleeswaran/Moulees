#include <iostream>
using namespace std;

int main() {
	int n1,n2,temp;
	cout<<"Enter any 2 numbers\n";
	cin>>n1>>n2;
	cout<<"Before swapping\n";
	cout<<n1<<"  "<<n2;
	temp=n1;
	n1=n2;
	n2=temp;
	cout<<"\nAfter swapping\n";
	cout<<n1<<"  "<<n2;
	return 0;
}
