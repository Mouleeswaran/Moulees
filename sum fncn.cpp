#include <iostream>
using namespace std;
 class Sum
{
	public:
	int result;
	public:
	Sum(int a,int b,int c)
	{
		result=a+b+c;
		cout<<result;
	}
	
};
int main() {
	int A,B,C;
	cout<<"Enter 3 numbers\n";
	cin>>A>>B>>C;
	Sum s(A,B,C);
	return 0;
}
