//Notes:
//
//1. Why to use virtual Function?
//	a. To achieve dynamic polymorphism. Which is the ability to call Derived class function using Base
//		class pointer or reference
//
//2. How to use virtual Function ?
//a.By declaring function as virtual in base class and overriding that function in Derived class.
//(Function signature should be same in Base and Derived class)
//
//b.Declaring function as virtual in Base class is enoough, Derived class function need not to be
//Declared virtual.'
//
//c.Virtual functions should be accessed using pointer(*) or reference(&) of Base class type to achieve
//run time polymorphism.
//
//
//Additional Notes
//1. Virtual function cannot be static and cannot be a friend function of another class.
//2. A class can have virtual destructor but can't have virtual constructor.
//3. There are two types of virtual function in C++
//	a. Virtual Functions
//	b. Pure virtual Function


#include<iostream>

using namespace std;

class Base
{
public:
	virtual void fun()
	{
		cout << "I am Base fun" << endl;
	}
};

class Derived:public Base
{
public:
	void fun() override		// override is optional
	{
		cout << "I am derived fun" << endl;
	}
};

int main()
{
	Base* b = new Derived();
	b->fun();

	return 0;
}