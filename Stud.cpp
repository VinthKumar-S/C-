#include<iostream>
#include<iomanip>
using namespace std;
class student
{
	int rolno,m1,m2,m3,tot;
	float ave;
	char name[20];
public:
	void get()
	{
	cout<<"\n Enter the name:";
	cin>>name;
	cout<<"\n Enter the roll number:";
	cin>>rolno;
	cout<<"\n Enter the mark1,mark2,mark3:";
	cin>>m1>>m2>>m3;
	}
	void calc(){
	tot=m1+m2+m3;
	ave=(m1+m2+m3);
	}
	void put()
	{
	cout<<"\n"<<name<<" "<<rolno<<" "<<m1<<" "<<m2<<" "<<m3<<" "<<tot<<" "<<ave;	
	}
};
	int main()
	{
	student stud[20];
	int i;
	stud[i].get();
	stud[i].calc();	

	cout<<"\n_______________________________________________________";
	cout<<"\nStudent name,roll no,mark1,mark2,mark3,total,average";
	cout<<"\n_______________________________________________________";
	stud[i].put();
	cout<<"\n________________________________________________________";	
	return 0;	
	}
