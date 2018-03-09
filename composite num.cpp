#include <iostream>
using namespace std;

int main() {
	int num,i,temp=0;
	cout<<"ENter a number\n";
	cin>>num;
	for(i=2;i<num/2;i++)
	{
		if(num%i==0)
		{
			temp+=1;
		}
	}
	if(temp!=0)
	{
		cout<<"YES";
	}
	else
	{
		cout<<"NO";
	}
	return 0;
}
