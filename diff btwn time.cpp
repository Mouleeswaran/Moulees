#include <iostream>
using namespace std;

int main() {
	int hours1,hours2, minutes1,minutes2, temp1,temp2, sub=0;
	cout<<"Enter the First time in hours and minites formate\n";
	cin>>hours1>>minutes1;
	cout<<"Enter the Second time in hours and minites formate\n";
	cin>>hours2>>minutes2;
	cout<<"Given Times \n Hours: "<<hours1<<" "<<"Minutes: "<<minutes1<<"\n Hours: "<<hours2<<" "<<"Minutes: "<<minutes2;
	temp1=hours1*60;
	temp1=temp1+minutes1;
	temp2=hours2*60;
	temp2+=minutes2;
	sub=temp1-temp2;
	hours1=sub/60;
	minutes1=sub%60;
	cout<<"\nResult time is\n Hours: "<<hours1<<" "<<"Minutes: "<<minutes1;
	return 0;
}
