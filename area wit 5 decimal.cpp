#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	double length,breadth;
	cout<<"Enter the length and breadth of the farm\n";
	cin>>length>>breadth;
	cout<<setprecision(5)<<fixed;
	cout<<(length*breadth);
	return 0;
}
