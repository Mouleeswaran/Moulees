#include <iostream>
using namespace std;

int main() {
	int n,num=0;
	cout<<"Enter any number\n";
	cin>>n;
	while(n!=0)
	{
		num=(num*10)+(n%10);
		n=n/10;
	}
	while(num!=0)
	{
		n=num%10;
		num=num/10;
		if(n%2!=0)
		{
			cout<<n<<" ";
		}
	}
	return 0;
}
