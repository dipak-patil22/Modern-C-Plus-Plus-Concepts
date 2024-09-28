#include <iostream>
using namespace std;

class Foo
{
private:
	int x;

public:
	explicit Foo(int x) : x{ x }
	{

	}

	int getX() { return x;}

	~Foo() { cout << "Foo destructor is called for: " << x <<endl;}
};

int main()
{
	unique_ptr<Foo> p1{ new Foo(10) };
	unique_ptr<Foo> p2 = make_unique<Foo>(20);


	//cout << p1->getX() << endl;
	//cout << p2->getX() << endl;

	unique_ptr<Foo> p4 = move(p2); // ownership of p2 is transferred to p4
	//cout << p2->getX() << endl; //p2 will be nullptr
	cout << p4->getX() << endl;


	//Foo* p = p4.get();

	Foo* p5 = p1.release();

	p4.reset(p5);

	p1.swap(p4);	

		//-------Understand functions from notes----------

}