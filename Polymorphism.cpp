#include<iostream>
using namespace std;
class Batsman{
 protected:
 	int run;
 public:
 	void setRuns(int r);
 	run =r;
};
class Dhoni:public Batsman{
 public:
 	void printRuns(){
 	cout<<"Dhoni Scored:"<<run<<"\n";
	 }
};
class Kholi:public Batsman{
 public:
 	void printRuns(){
 	cout<<"Kholi Scored:"<<run<<"\n";
	 }
};
int main()
{
Dhoni dhoni;
Kholi kholi;

Batsman*batsman1=&dhoni;
Batsman*batsman2=&kholi;

batsman1->setRuns();
batsman2->setRuns();
dhoni.printRuns();
kholi.printRuns();
return 0;	
}
