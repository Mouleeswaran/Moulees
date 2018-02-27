#include <iostream>
using namespace std;

int main() {
	int n,i;
	cout<<"Enter the value of N\n";
	cin>>n;
	int *arr=new int[n];
	for(i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	for(i=0;i<n;i++)
	{
		cout<<"arr["<<i<<"]= "<<arr[i]<<"\n"; 
	}
	return 0;
}
