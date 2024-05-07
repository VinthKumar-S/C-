#include<iostream>
#include<fstream>
using namespace std;
int main()
{
char str[100];
cout<<"Enter the name and address"<<endl;
cin.getline(str,100);
ofstream myfile("abc.txt");
myfile<<str;
myfile.close();
cout<<"file write successfully"<<endl;
cout<<"file start to reading"<<endl;
char str2[100];
ifstream obj("abc.txt");
obj.getline(str2,100);
cout<<"Output is:::"<<str2<<endl;
cout<<"file read Successfully";
obj.close();
return 0;
}
