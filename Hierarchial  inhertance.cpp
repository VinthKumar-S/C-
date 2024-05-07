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
	
};
class B:public A
{
 protected:
 	int z;
 public:
	void sub()
{
	z=a-b;
	cout<<"\nthe result of subtraction is: "<<z<<"\n";
}	
};
class C:public A
{
 protected:
 	int x;
public:
	void mul()
	{
	x=a*b;
	cout<<"\nThe result multiplication is:"<<x;
}
};
int main()
{
B s1;
C s2;
s1.get();
s1.sub();
s2.get();
s2.mul();
return 0;
}

