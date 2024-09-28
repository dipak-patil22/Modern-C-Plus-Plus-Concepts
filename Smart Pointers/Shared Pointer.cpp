#include <iostream>
#include <memory>

using namespace std;

class Foo
{
private:
	int x;

public:
	explicit Foo(int x) : x{ x }
	{

	}

	int getX() { return x; }

	~Foo() { cout << "Foo destructor is called for: " << x << endl; }
};

int main()
{

	shared_ptr<Foo> sp(new Foo(100));
	shared_ptr<Foo> sp1 = make_shared<Foo>(20);

	cout << sp->getX() << endl;
	cout << sp.use_count() << endl;

	shared_ptr <Foo> sp2 = sp;
	cout << sp.use_count() << endl;
	cout << sp2.use_count() << endl;

	return 0;
}