#include<iostream>
using namespace std;
class sum
{
int a=12,b=5;
public:
friend void max(sum s);	
};
void max(sum s)
{
if(s.a>s.b)
cout<<"first is greater="<<s.a;
else
cout<<"secand is greater="<<s.b;	
}
int main()
{
sum t;
max(t);
return 0;	
}
