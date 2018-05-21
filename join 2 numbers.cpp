#include <iostream>
using namespace std;

int main() {
	int N,K,temp1=0,temp;
	cout<<"EMter 2 numbers\n";
	cin>>N>>K;
	while(K!=0)
	{
		temp=K%10;
		temp1=temp1*10+temp;
		K=K/10;
	}
	while(temp1!=0)
	{
		temp=temp1%10;
		N=N*10+temp;
		temp1=temp1/10;
	}
	cout<<N;
	return 0;
}
