#include <iostream>
using namespace std;

int main() {
	int n,k,i,count=0;
	cout<<"Enter the value of n\n";
	cin>>n;
	int *arr=new int[n];
	cout<<"Enter the value of array\n";
	for(i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	cout<<"Ente the value of k\n";
	cin>>k;
	i=0;
	while(i<n)
	{
		if(arr[i]==k)
		count++;
		i++;
	}
	if(count!=0)
	cout<<"YES";
	else
	cout<<"NO";
	return 0;
}
