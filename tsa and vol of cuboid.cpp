#include <iostream>
using namespace std;

int main() {
	int l,b,h,TSA,Volume;
	cout<<"Enter the Length, Breadth and Height\n";
	cin>>l>>b>>h;
	TSA=(2*l*b)+(2*b*h)+(2*h*l);
	Volume=l*b*h;
	cout<<"Total Surface Area: "<<TSA<<"\n";
	cout<<"Volume: "<<Volume;
	return 0;
}
