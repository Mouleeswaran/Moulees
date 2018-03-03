#include <iostream>
using namespace std;
 
int main() {
	char str[100];
	int k;
	cout<<"Enter the string\n";
	cin>>str;
	cout<<"Enter the value of k\n";
	cin>>k;
	for(int i=0;i<k;i++)
	{
		cout<<str[i];
	}
	return 0;
}
