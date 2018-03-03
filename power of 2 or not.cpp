#include <iostream>
using namespace std;
class PowerofTwo
{
	public:
	PowerofTwo(int num)
	{
		int count;
		if(num==0)
		{
		cout<<"Numbwr is zero";
		}
		else
		while(num=!1)
		{
			count=0;
			if(num%2==0)
			{
			    num=num/2;
		    	    count=1;
			}
			else
		            {
		    	cout<<"NO";
			    break;
		            }
		}
		if(count==1)
		cout<<"YES";
	}
};
int main() {
	int n;
	cout<<"Enter a number\n";
	cin>>n;
	PowerofTwo p(5);
	return 0;
}
