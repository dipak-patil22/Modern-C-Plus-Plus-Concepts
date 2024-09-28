#include <iostream>
using namespace std;

class Point
{
	int arr[2];

public:
	Point(int x = 0, int y = 0)
	{
		arr[0] = x;
		arr[1] = y;
	}

	void Print()
	{
		cout << "x:" << arr[0] << " " << "y:" << arr[1] << endl;
	}

	int& operator [] (int pos) {
		if (pos == 0)
			return arr[0];
		else if (pos == 1)
			return arr[1];
		else
		{
			cout << "Out of bound case" <<endl;
			exit(0);
		}
	}

};

int main()
{
	Point p1(2, 3);
	p1.Print();

	p1[0] = 5;
	p1[1] = 7;
	p1.Print();


	p1[3] = 8;

	return 0;

}