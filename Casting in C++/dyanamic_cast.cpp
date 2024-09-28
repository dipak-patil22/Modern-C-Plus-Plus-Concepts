#include<iostream>
#include<exception>
using namespace std;

class Base {
	virtual void print() { cout << "Base" << endl; }
};

class Derived1 : public Base {
	void print() { cout << "Derived1" << endl;}
};

class Derived2 : public Base {
	void print() { cout << "Derived2" << endl; }
};

int main() {
	Derived1 d1;
	Derived1 d11;

	Base* bp = dynamic_cast <Base*> (&d1);		//upcast is fine


	Derived2* dp2 = dynamic_cast<Derived2*> (bp);

	if (dp2 == nullptr)				//O/P: NULL
		cout << "NULL" << endl;
	else
		cout << "NOT NULL" << endl;




	Base* bp1 = dynamic_cast <Base*> (&d11);		//upcast is fine

	Derived1* dp3 = dynamic_cast<Derived1*> (bp1);

	if (dp3 == nullptr)				//O/P: NOT NULL
		cout << "NULL" << endl;
	else
		cout << "NOT NULL" << endl;



	try
	{
		Derived2 & r1 = dynamic_cast<Derived2 &> (d1);	//O/p: Bad dynamic cast
	}
	catch (std::exception& e)
	{
		cout << e.what() << endl;
	}

	return 0;
			
}