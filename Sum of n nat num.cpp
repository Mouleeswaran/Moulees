#include <iostream>
using namespace std;

int main() {
	int i,num,sum=0;
	cout<<"Enter a number\n";
	cin>>num;
	for(i=1;i<=num;i++)
	{
		sum+=i;
	}
	cout<<sum;
	return 0;
}
