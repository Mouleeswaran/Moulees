#include <iostream>
using namespace std;

int main() {
	int num,sum=0;
	cout<<"enter a number\n";
	cin>>num;
	for(int i=1;i<=num;i++)
	{
		sum=sum+i;
	}
	cout<<sum;
	return 0;
}
