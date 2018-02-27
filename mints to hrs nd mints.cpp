#include <iostream>
using namespace std;

int main() {
	int min,hours,minutes;
	cout<<"Enter the minutes to convert\n";
	cin>>min;
	hours=min/60;
	minutes=min%60;
	cout<<"Given minites :"<<min<<"\n"<<"Hours: "<<hours<<" "<<"Minutes: "<<minutes;
	return 0;
}
