#include<iostream>
using namespace std;
class A
{
	protected:
	int a,b,c;
	public:
void get()
{
	cout<<"Enter the a,b:";
	cin>>a>>b;
}
void add()
{
	c=a+b;
	cout<<"the result of addition is:"<<c;
}
};
class B:public A
{
	protected:
		int d;
	public:
	void sub()
	{
	d=a-b;
	cout<<"\nthe result of substraction is:"<<d;	
	}
};
int main()
{
	B s;
	s.get();
	s.add();
	s.sub();
return 0;
}
