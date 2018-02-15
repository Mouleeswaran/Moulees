#include <iostream>
using namespace std;

int main() {
	int n,great=0,i;
	cout<<"Enter value of n\n";
	cin>>n;
	int*arr=new int[n];
	cout<<"Enter the elements of array\n";
	for(i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	for(i=0;i<n;i++)
	{
		if(arr[i]>great)
		great=arr[i];
	}
	cout<<great;
	return 0;
}
