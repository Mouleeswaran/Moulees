#include <iostream>
using namespace std;

int main() {
	int num,count=0;
	cout<<"Enter a number\n";
	cin>>num;
	while(count==0)
	{
		if(num%10==0)
		{
			count++;
		}
		num++;
	}
	cout<<num-1;
	return 0;
}
