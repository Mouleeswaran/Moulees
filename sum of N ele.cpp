#include <iostream>
using namespace std;

int main() {
	int n,sum=0;
	cout<<"Enter value of N\n";
	cin>>n;
	int *arr=new int[n];
	cout<<"Enter N values\n";
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
		sum+=arr[i];
	}
	
	cout<<sum;
	return 0;
}
