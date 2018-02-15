#include <iostream>
using namespace std;

int main() {
	char ch;
	int a;
	cout<<"Enter a Character\n";
	cin>>ch;
	a=int(ch);
	if((a<41)||(a>90)&&(a<97)||(a>122))
	{
		cout<<"ALPHABET";
	}
	else 
	{
		cout<<"NO";
	}
	return 0;
}
