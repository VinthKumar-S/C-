#include<iostream>
using namespace std;
int main()
{
int num[3],j,c,reply;
for(j=0;j<3;j++)
{
cout<<"Enter your number:\n";
cin>>num[j];
}
s1:
cout<<"Enter your choice:\n";
cin>>c;
switch(c)
{
case 1:
cout<<"the frist number:"<<num[0];
if(num[0]%2==0)
cout<<"--the given number is even\n";
else
cout<<"-the given number is odd\n";
break;
case 2:
cout<<"the second number:"<<num[1];
if(num[1]%2==0)
cout<<"--the given number is even\n";
else
cout<<"-the given number is odd\n";
break;
case 3:
cout<<"the thirt number:"<<num[2];
if(num[2]%2==0)
cout<<"--the given number is even\n";
else
cout<<"--the given number is odd\n";
break;	
}
cout<<"do you want to condinue press 1\n";
cin>>reply;
if(reply==1)
goto s1;	
return 0;
}
