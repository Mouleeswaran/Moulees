#include <iostream>
using namespace std;

int main() {
	int arr[10],min;
	cout<<"Enter 10 numbers\n";
	for(int i=0;i<10;i++)
	{
		cin>>arr[i];
	}
	min=arr[0];
	for(int i=0;i<10;i++)
	{
		if(min>arr[i])
		min=arr[i];
	}
	cout<<min;
	return 0;
}
