#include <iostream>
using namespace std;

int main() {
	int num,num1=0;
	cout<<"Enter a numer\n";
	cin>>num;
	while(num!=0)
	{
	    num1=(num1*10)+(num%10);
	    num=num/10;
	}
	while(num!=0)
	{
	    num=num1%10;
	    cout<<num<<" ";
	    num1=num1/10;
	}
	return 0;
}
