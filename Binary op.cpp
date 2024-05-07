#include<iostream>
using namespace std;
class sum
{
	int a;
	public:
void input()
{
	cout<<"Enter a:";
	cin>>a;
}
sum operator+(sum c)
{
	sum t;
	t.a=a+c.a;
return t;
}
void display()
{
	cout<<"\nThe result is:"<<a;
}
};
int main()
{
	sum s1,s2,s3;
	s1.input();
	s2.input();
	s3=s1+s2;
	s3.display();
	
return 0;	
}
