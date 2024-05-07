#include<iostream>
using namespace std;
int main()
{
	 int n;
	cout.fill('<');
	cout.precision(3);
	cout<<"Enter the value:";
	cin>>n;
	for(n; n<=6; n++)
	{
		
		cout.width(5);
		cout<<n;
		cout.width(10);
		cout<<1.0/float(n)<<"\n";
		if(n==3)
		cout.fill('>');
	}
	cout<<"\n Padding changeed \n\n";
	cout.fill('#');
	cout.width(15);
	cout<<12.345678<<"\n";
	
	return 0;
	
}
