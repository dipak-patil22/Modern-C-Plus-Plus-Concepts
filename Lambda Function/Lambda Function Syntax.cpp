#include <iostream>
#include<functional>
#include<vector>
#include<algorithm>

using namespace std;


//Ex1:shortest Lambda function

//int main()
//{
//	[]() {};
//}

//Ex2: 

//int main()
//{
//	auto sayHello = []() {
//			cout << "Hello World" << endl;
//		};
//
//	sayHello();
//}


//Ex3:


int main()
{

	auto getProduct = [](int a, int b)
		{
			return a * b;
		};

	cout << getProduct(10, 20) << endl;

	return 0;
}