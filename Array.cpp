#include<iostream>
using namespace std;
int main()
{
int number[3];
int total=0;
for(int i=0;i<3;i++){
cin>>number[i];
total=total+number[i];	
}
cout<<"this is output"<<total;	
return 0;
}
