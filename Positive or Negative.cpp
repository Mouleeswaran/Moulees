#include <iostream>
using namespace std;

int main() {
	int num;
	cout<<"Enter the number to check\n";
	cin>>num;
	if(num<0)
	{
		cout<<"The Number is negative";
	}
	else if(num>0)
	{
		cout<<"The Number is Positive";
	}
	else if(num==0)
	{
		cout<<"The Number is eqal to Zero";
	}
  else
  {
    cout<<"Enter a valied integer";
  }
	return 0;
}
