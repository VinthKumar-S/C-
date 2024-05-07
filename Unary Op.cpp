#include<iostream>
using namespace std;
class incr
{
	int a,b;
public:
	void input()
	{
		cout<<"Enter the Values:";
		cin>>a>>b;
	}
	void operator++()
	{
	++a;
	++b;
	}
	void display()
	{
	cout<<"\nthe result is:"<<a<<"and"<<b;
	}
	
};
	int main()
	{
		incr s;
		s.input();
		++s;
		s.display();
	return 0;
	}
