#include <iostream>
using namespace std;

int main() {
	int n,k;
	cout<<"Enter N and K\n";
	cin>>n;
	cin>>k;
	int *arr=new int[n];
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	cout<<arr[k-1];
	return 0;
}
