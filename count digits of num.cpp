#include <iostream>
using namespace std;

int main() {
	int num,temp,count=0;
	cout<<"Enter the number\n";
	cin>>num;
	while(num!=0)
	{
		num=num/10;
		count+=1;
	}
	cout<<count;
	return 0;
}
