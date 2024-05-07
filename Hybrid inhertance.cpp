#include<iostream>
using namespace std;
class A
{
  protected:
  	int a,b;
  public:
  	void get()
  	{
  cout<<"Enter the a,b:";
  cin>>a>>b;		
	}
};
class B:public A
{
	protected:
		int c;
	public:
		void add()
	{
	c=a+b;
	cout<<"\nThe result of addition is:"<<c;
	}
};
class 	C
{
	protected:
		int d;
	public:
		void assign()
	{
	d=8;
	}
};
class D:public B,public C
{
	protected:
		int e;
	public:
	    void mul()
	{
	e=c*d;
	cout<<"\n The final result is:"<<e;
	}
};
int main()
{
	D s;
	s.get();
	s.add();
	s.assign();
	s.mul();
return 0;
}
