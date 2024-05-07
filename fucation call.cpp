#include<iostream>
#include<conio.h>
using namespace std;
void swap(int a,int b)
{
int temp=a;
a=b;
b=temp;
cout<<"value after swaping in side"<<a<<"and"<<b<<"\n";	
}
int main()
{
int x,y;
cout<<"enter x,y";
cin>>x>>y;
swap(x,y);
return 0;	
}
