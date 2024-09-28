//Notes
// 1. In C++ it is possible to change the behavior of operators (+,-, *, ....)
// 2. But we can change the behavior for user defined types (class, struct) only
// 3. We use operator overloading to make our problem more intutive (readable) or same thing can be
//	  done using writing function add or substract, etc.
// 4. There are few operators we can't overload
		// A.  ::
		// B.  ? 
		// C.  .
		// D.  *
		// E.  sizeof

#include<iostream>
using namespace std;


class Point {
	int x;
	int y;
public:
	Point(int x = 0, int y = 0) : x{ x }, y{ y } {};

	// returnType operator nameOfOperator (const IncomingDataType & rhs) { operation } 

	Point operator + (const Point& rhs)		//Operator Overloading
	{
		Point p;
		p.x = x + rhs.x;
		p.y = y + rhs.y;

		return p;
	}

	Point operator - (const Point& rhs)		//Operator Overloading
	{
		Point p;
		p.x = x - rhs.x;
		p.y = y - rhs.y;

		return p;
	}

	void Print()
	{
		cout << "x: " << x << " " << "y: " << y << endl;
	}

};


int main() 
{
	Point P1(1, 2), P2(3, 4);
	Point P3 = P1 + P2;
	//	  p3 = p1.operator::(p2)	//Something like this happen behind

	P3.Print();

	P3 = P1 - P2;

	P3.Print();

	return 0;
}