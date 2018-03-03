#include <iostream>
using namespace std;

int main() {
	int a[10],i,max=0;
	cout<<"Enter any 10 numbers\n";
	for(i=0;i<10;i++)
	{
		cin>>a[i];
	}
	for(i=0;i<10;i++)
	{
		if(max<a[i])
		max=a[i];
	}
	cout<<"Maximum number is: "<<max;
	return 0;
}
