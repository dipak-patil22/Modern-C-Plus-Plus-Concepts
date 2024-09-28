#include<iostream>
#include <string>
using namespace std;

////Ex1: It performs implicit conversion between types
//
//int main()
//{
//	float f = 3.5;
//	int a;
//
//	//a = f;					//both are doing same conversion
//	a = static_cast<int>(f);
//
//	cout << a << endl;
//
//	return 0;
//}
//
////It is easier to find where we did conversion in code using keyword static_cast.
////with c++ style conversion it becomes very hectic. so prefer casting.
//








////Ex2: Use static_cast when concversion between types is provided through "Conversion Operator"
//// or "Conversion Constructor"
//
//
//class Int
//{
//	int x;
//public:
//	Int(int x = 0): x{ x } 
//	{
//		cout << "Conversion Constructor" << endl;
//	}
//
//	operator string() {
//		cout << "Conversion Operator" << endl;
//		return to_string(x);
//	}
//};
//
//int main()
//{
//	Int obj(3);
//
//	string str1 = obj;
//	obj = 20;
//
//	string str2 = static_cast <string> (obj);
//	obj = static_cast <Int> (20);
//
//	return 0;
//}







////Ex3: static_cast is more restrictive than C-style
////Ex: char* to int* is allowed in C-style but not with static_cast
//
//int main()
//{
//	char c;					//1 byte data
//	int* p = (int*)(&c);	//4 byte data
//	*p = 5;					//Pass at compile time but fails at run time
//							// we are trying to store 4 byte data at 1 byte memory location
//							// this is dangerous and should be restricted.
//
//	//int* p1 = static_cast<int*>(&c);	//Fails: gives compiler error: Invalid type conversion
//
//	return 0;
//}



////Ex4: static_cast avoid cast from derived to private base pointer
//
//class Base {};
//class Derived{}: private Base{};
//
//int main()
//{
//	Derived d1;
//	Base* bp1 = (Base*)&d1;						//Allowed at compile-time
//	//Base* bp2 = static_cast<Base*> (&d1);		//Not allowed at compile-time
//
//	return 0;
//}




////Ex5: Use for all upcasts, but never use for confused down cast
//
//class Base {};
//class Derived1: public Base{};class Derived1: public Base{};
//class Derived2 : public Base {};
//
//int main()
//{
//	Derived1 d1;
//	Derived2 d2;
//
//	Base* b1 = static_cast<Base*>(&d1);
//	Base* b2 = static_cast<Base*>(&d2);
//
//	Derived1* d1p = static_cast<Derived1*>(b2);
//	//Derived1* d2p = static_cast<Derived2*>(b1);
//
//	return 0;
//}