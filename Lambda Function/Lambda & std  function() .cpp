#include <iostream>
#include<functional>
#include<vector>
#include<algorithm>

using namespace std;

void performOperation(std::function<void ()> f)
{
	f();
}

int main()
{
	int x = 100;

	auto func = [&]() { x++; };

	performOperation(func);

	cout << "x: " << x << endl;

	return 0;
}