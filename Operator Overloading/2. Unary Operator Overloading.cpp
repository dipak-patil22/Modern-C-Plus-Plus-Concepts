#include <iostream>
using namespace std;

class Point {
	int x;
	int y;
public:
	Point(int x = 0, int y = 0) : x{ x }, y{ y } {};


	Point operator - () {					// unary '-' Operator Overloading
		return { -x, -y };
	}

	Point operator - (const Point& rhs)		// '-' Operator Overloading
	{
		Point p;
		p.x = x - rhs.x;
		p.y = y - rhs.y;

		return p;
	}


	Point operator ++ () {				// Prefix '++' Operator Overloading
		return { ++x, ++y };
	}

	Point operator ++ (int) {		//The postfix version takes an int parameter 
									//(which is not used but distinguishes it from the prefix version).
		Point temp = *this;		//-> saves the current state
		++x, ++y;				//Increment
			
		return temp;			//returns preserved state
	}

	void Print()
	{
		cout << "x: " << x << " " << "y: " << y << endl;
	}


};


int main()
{
	//Point p1(2, 3);		// unary '-' Operator Overloading
	//Point p2 = -p1;
	//p2.Print();



	//Point p3(1, 2);		// '-' Operator Overloading
	//Point p4(2, 3);
	//Point p5 = (p4 - p3);
	//p5.Print();


	//Point p6(2, 3);		// Prefix '++' Operator Overloading
	//(++p6).Print();

	Point p7(2, 3);		// Postfix '++' Operator Overloading
	(p7++).Print();
	(p7).Print();



}
