//TOPIC: Pure Vitual Function
//
//SYNTAX : virtual returntype function_name(parameteres...) = 0;
//
//NOTES:
//
//0. If some class can have only signature of function but not the body then we use
//pure vitual functions.
//
//1. Sometimes in Base class we know the function name but not the definationn of the function,
//so we want Derived classes to provide the defination of the function.
//
//2. We can actually give body of pure virtual function.
//
//3. If you have pure virtual function in your class, it means that class is an Abstract class
//and you can't create an object of that clas.
//(But pointers and reference can be created)
//
//4. We have to provide the defination of function in derived class or derived class also becomes
//an abstract class and we cant create its instance as well.
//
//USE CASE :
//1. used to create abstract classes, which helps creating interfaces(APIs)


#include<iostream>
using namespace std;

class Animal
{
public:
	virtual void eat() = 0;
};

class Cow : public Animal
{
public:
	void eat()
	{
		cout << "Eat Veg Food" << endl;
	}
};

class Tiger : public Animal
{
public:
	void eat()
	{
		cout << "Eat Non Veg Food" << endl;
	}
};

int main()
{
	//Animal a; // Not allowed to create the instance of abstract class

	Animal* a = new Cow();
	a->eat();	// O/P: Eat Veg Food
	delete a;

	Animal* b = new Tiger;
	b->eat();	// O/P: Eat Non Veg Food
	delete b;


	return 0;
}