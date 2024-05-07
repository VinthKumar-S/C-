#include<iostream>
using namespace std;
class sum
{
int a,b;
static int c;
public:
void input()
{
	cout<<"Enter a and b=";
	cin>>a>>b;
}
void add()
{
	c=a+b;
	}
void display()
{
cout<<"\nAnswer="<<c<<"\n";	
	}
};
int  sum::c;
int main()
{
sum s,t;
s.input();
s.add();
s.display();
t.input();
t.add();
t.display();	
return 0;
}

