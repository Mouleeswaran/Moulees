#include <iostream>
using namespace std;

int main() {
	int arr[10],i,max=0;
	cout<<"Enter any 10 numbers\n";
	for(i=0;i<10;i++)
	{
		cin>>arr[i];
	}
	for(i=0;i<10;i++)
	{
		if(max<arr[i])
		max=arr[i];
	}
	cout<<"Maximum number is: "<<max;
	return 0;
}
