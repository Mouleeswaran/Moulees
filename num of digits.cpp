#include <iostream>
using namespace std;

int main() {
	int num,count=1;
	cout<<"Enter a digits of number\n";
	cin>>num;
	while(num!=0)
	{
		num=num/10;
		count++;
	}
	cout<<(count-1);
	return 0;
}
