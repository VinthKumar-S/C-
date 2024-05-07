#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	ofstream myfile("xyx.txt");
	cout<<myfile.tellp()<<endl;
	myfile<<"Vinith";
	myfile.seekp(-2,ios::end);
	cout<<myfile.tellp()<<endl;
	myfile<<"Hey";
	cout<<myfile.tellp()<<endl;
	myfile.seekp(3,ios::beg);
	cout<<myfile.tellp()<<endl;
	myfile.seekp(3,ios::cur);
	cout<<myfile.tellp()<<endl;
	
	return 0;
}
