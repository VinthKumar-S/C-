#include<iostream>
using namespace std;
class sum
{
	int a,b,c;
public:
	
	void add(int a,int b)
{
	c=a+b;
}
 	void display()
 	{
 	cout<<"\nTotal="<<c;	
	 }
};
	int main()
{
	sum s;
	s.add(6,7);
	s.display();
return 0;	
}
