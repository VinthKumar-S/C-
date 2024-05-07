#include <iostream>
#include<string>
using namespace std;
int main()
{
int ans;
cout<<"what is the capital of india \n";
cout<<"press 1 for new delhi \n";
cout<<"press 2 for gujarat \n";

cin>>ans;
switch(ans){
case 1:
cout<<"new delhi is right";
break;
case 2:
cout<<"gujarat is wrong";
break;
case 3:
cout<<"***********";
break;
defult:
cout<<"you enter the Wrong Choice";
	}
return 0;
		
}
