// << extraction operator
// >> insertion operator
 
//Points:
// 1. when we need overload << & >> ?
//	  cout << (user defined data type)  & cin >> (user defined data type)
// 
// 2. It can't be class member function, as we are overloading on object cin and cout, which are not
//	  object of our class
//	
// 3. We have to make it friend function of our class.
//   


#include<iostream>
using namespace std;


class test {
	int x;
public:
	test(int x = 0): x{x}{}

	friend istream& operator >> (istream& input, test& obj);
	friend ostream& operator << (ostream& output, test& obj);

};

istream& operator >> (istream& input, test& obj)
{
	input >> obj.x;
	return input;
}

ostream& operator << (ostream& output, test & obj)
{
	output << obj.x;
	return output;
}

int main()
{
	test t1;
	cin >> t1;
	cout << t1;

	return 0;
}