#include<iostream>
using namespace std;
//declaring class
class Demo
{
	//access modifier
	public:
	string Name;
	int Age;
	float* Rates;
	int RatesCount;
	//constructor
	Demo(string name, int age){
		Name = name;
		Age = age;

		RatesCount = 2;
		Rates = new float [RatesCount];
		for (int i = 0; i < 2; i++){
			Rates[i];
		}
		
	}
	//destructor
	~Demo(){
		delete[] Rates;
		Rates = nullptr;
	}
};
int main()
{
	Demo demo("Nungu", 20);

	cout << demo.Age << endl;
	cout << demo.Name << endl;

}
