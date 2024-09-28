
//Points:
//1. When we should write our own assignment operator in c++ ?
// -> when we have pointer in our class as data member then we should write our own assignment opet.

//2. This comes under binary operator overloading.

//3. When we need deep copy, assignment operator must be overloaded

//4. We should also create own copy constructor when overloading assignment operator and vise versa


//Function Points
//1. Check self assignment because it may do unnecessary copying which is not needed.
//2. Assignment operator must be overloaded by non-static member function only


#include<iostream>
using namespace std;

class Test {
	int* x;

public:
	Test(int value=0) : x{ new int(value) } {}
	void setX(int val) { *x = val; }
	void print() { cout << "OUTPUT: " << *x << endl; }
	~Test() { delete x; }

	Test& operator = (const Test& rhs) {		//comment this operator and see the difference
		if (this != &rhs)
			*x = *rhs.x;

		return *this;
	}

};

int main()
{
	Test t1(10);
	t1.print();

	Test t2;
	t2 = t1;
	t2.setX(20);

	t2.print();
	t1.print();
}