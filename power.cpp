#include <iostream>
using namespace std;

int main() {
	int n,k,result=1;
	cout<<"Entr the value of two numbers\n";
	cin>>n>>k;
	while(k!=0)
	{
		result*=n;
		k--;
	}
	cout<<result;
	return 0;
}
