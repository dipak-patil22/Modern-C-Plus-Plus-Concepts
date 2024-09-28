#include <iostream>
#include<functional>
#include<vector>
#include<algorithm>

using namespace std;

//Ex1: Passing outside variable to lambda function by value

//int main()
//{
//
//	int i = 10;
//	int g = 20;
//
//	auto getSum = [i, g](int a, int b) {		//passing outside variable i & g by value
//		//i = 30;						//Fail:: Cant modify the value as passed by value.
//		return a + b + i + g;
//		};
//
//	cout << getSum(190, 10) << endl;
//}



//Ex2: Passing outside variable to lambda function by reference

//int main()
//{
//
//	int i = 10;
//	int g = 20;
//
//	auto getSum = [&i, &g](int a, int b) {		//passing outside variable i & g by reference
//		i = 30;						//Pass:: Can modify the value as passed by reference.
//		g = 50;
//
//		return a + b + i + g;
//		};
//
//	cout << getSum(190, 10) << endl;
//}
//


//Ex3:
int main()
{

	int i = 10;
	int g = 20;

	auto getSum = [i, &g](int a, int b) {		
		//i = 30;		Fail				
		g = 50;

		return a + b + i + g;
		};

	cout << getSum(190, 10) << endl;
}


//Ex4:
//int main()
//{
//
//	int i = 10;
//	int g = 20;
//
//	auto getSum = [=](int a, int b) {
//		//i = 30;		//Fail				
//		//g = 50;		//Fail
//
//		return a + b + i + g;
//		};
//
//	cout << getSum(190, 10) << endl;
//}
//
//
////Ex5:
//int main()
//{
//
//	int i = 10;
//	int g = 20;
//
//	auto getSum = [&](int a, int b) {
//		i = 30;		//Pass				
//		g = 50;		//Pass
//
//		return a + b + i + g;
//		};
//
//	cout << getSum(190, 10) << endl;
//}
