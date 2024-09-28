#include<iostream>
using namespace std;

////1. It can perform dangerous conversions because it can typecast any pointer to any other pointer
//
//class Mango {
//public:
//	void eatMango() { cout << "eating Mango" << endl; }
//};
//
//class Banana {
//public:
//	void eatBanana() { cout << "eating Banana" << endl; }
//};
//
//int main()
//{
//	Mango* m = new Mango();
//
//	Banana* newBanana = reinterpret_cast<Banana*>(m);
//	newBanana->eatBanana();
//
//	return 0;
//
//}




//Ex2: It is used when you want to work with bits

struct myStruct {
	int x;
	int y;
	char c;
	bool b;
};

int main() 
{
	myStruct s;
	s.x = 5;	s.y = 10;	s.c = 'a';	 s.b = true;
	int* p = reinterpret_cast<int*>(&s);
	cout << *p << endl;

	p++;
	cout << *p << endl;

	p++;
	char* c = reinterpret_cast<char*>(p);
	cout << *c << endl;


	cout << *(reinterpret_cast<bool*>(++c)) << endl;

	return 0;
}