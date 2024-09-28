//Points
// 1. There is no need to typecast implicit data types (compiler knows how to do that)
// 2. User defined data types needs this overloading

#include<iostream>
using namespace std;

double dollerToRupeeExchange()
{
	return 71.5;
}

class Rupee
{
	double rupee;
public:
	Rupee(double d = 0) : rupee{ d } {}
	void print() { cout << "Rupee: " << rupee; }
};


class Doller
{
	double doller;
public:
	Doller(double d = 0) : doller{ d } {}
	void print() { cout << "Doller: " << doller; }

	operator Rupee() {
		return doller * dollerToRupeeExchange();
	}
};

int main()
{
	Doller d(10);
	Rupee r;
	r = d;
	r.print();

	return 0;
}
