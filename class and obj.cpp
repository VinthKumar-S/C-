#include<iostream>
using namespace std;
class geek
{
	public:
		string geekname;
		void printname()
		{
		
				cout<<"greekname:"<<geekname;
			
			}
				
				
	};
	
	int main()
	{
		geek obj1;
		obj1.geekname="abi";
		obj1.printname();
		return 0;
	}
