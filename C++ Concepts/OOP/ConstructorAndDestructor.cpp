#include<iostream>
using namespace std;
//declaring class
class Demo
{
	//access modifier
	public:
	//constructor
	Demo()
	{
		cout<<"I am inside constructor\n";
	}
	//destructor
	~Demo()
	{
		cout<<"I am inside destructor\n";
	}
};
int main()
{
	//creating instance(object)
	Demo obj;
}
### Output ###
I am inside constructor
I am inside destructor
