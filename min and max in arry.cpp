#include <iostream>
using namespace std;

int main() {
	int n,min,max;
	cout<<"Enter the value of N\n";
	cin>>n;
	int *arr=new int[n];
	cout<<"ENter value of array\n";
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	min=arr[0];
	max=arr[0];
	for(int i=0;i<n;i++)
	{
		if(arr[i]<min)
		min=arr[i];
		if(arr[i]>max)
		max=arr[i];
	}
	cout<<min<<" "<<max; 
	return 0;
}
