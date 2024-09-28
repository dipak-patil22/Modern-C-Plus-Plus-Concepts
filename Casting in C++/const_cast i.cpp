#include<iostream>

using namespace std;

int main()
{
	//Ex1: Invalid
	const int a = 10;		 // Ideally we should not use when variable is const 
	const int* p = &a;

	int* p2 = const_cast <int*> (p);
	*p2 = 15;		//Invalid and undefined behavior 

	cout << a << endl;		//O/P : 10
	cout << *p2 << endl;	//O/P : 15

	//Ex2: valid

	int b = 20;
	const int* p3 = &b;

	int* p4 = const_cast <int*> (p3);
	*p4 = 50; 

	cout << b << endl;
	cout << *p4 << endl;
	 

	return 0;
	
}