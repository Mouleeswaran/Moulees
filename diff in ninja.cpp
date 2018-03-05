#include <iostream>
using namespace std;

int main() {
	int kabali,opponent;
	cout<<"Enter ninja number of both teams\n";
	cin>>kabali>>opponent;
	if(kabali<opponent)
	{
		cout<<"Difference is: "<<(opponent-kabali);
	}
	else
	{
		cout<<"Kabali ninja number should be lesser";
	}
	return 0;
}
