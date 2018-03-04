#include <iostream>
using namespace std;

int main() {
	int n,l,r;
	cout<<"Enter first number\n";
	cin>>n;
	cout<<"Enter two numbers for range\n";
	cin>>l>>r;
	if(n<=l&&n>=r)
	{
		cout<<"YES";
	}
	else
	{
		cout<<"NO";
	}
	return 0;
}
