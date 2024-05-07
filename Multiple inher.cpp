#include<iostream>
using namespace std;
class A
{
	protected:
		int a,b,c;
	public:
	void get()
	{
	cout<<"Enter a,b:";
	cin>>a>>b;
	}
	void add()
	{
	c=a+b;
	cout<<"\n the return of add is:"<<c;
	}
};
class B
{
protected:
	int x,y,z;
public:
	void input()
	{
	cout<<"\nEnter X,Y:";
	cin>>x>>y;	
	}
	void sub()
	{
	z=x-y;
	cout<<"\nThe result of subtraction is:"<<z;
	}	
};
class C:public A,public B
{
protected:
	int d;
public:
	void mul()
	{
	d=c*z;
	cout<<"\nThe result of multiplication is:"<<d;
	}
};
int main()
{
	C s;
	s.get();
	s.add();
	s.input();
	s.sub();
	s.mul();
return 0;	
}
