#include <iostream>
using namespace std;

int main() {
	int num,n=1,n1=0,n2,,i;
	cout<<"Enter a number\n";
	cin>>num;
	for(i=0;i<num;i++)
	{
		cout<<n<<" ";
		n2=n+n1;
		n1=n;
		n=n2;
		
	}
	
	return 0;
}
