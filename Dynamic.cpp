#include<iostream>
#include<string.h>
using namespace std;
class dyna
{
	int l;
	char *name;
public:
	dyna()
	{
		l=0;
		name = new char[l+1];
	}
	dyna(char *s)
	{
		l=strlen(s);
		name=new char[l+1];
		strcpy(name ,s);
	}
	void display()
	{
	cout<<name;
	}
};
int main()
{
	dyna d("hi");
	d.display();
return 0;
}
