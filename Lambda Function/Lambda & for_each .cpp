#include <iostream>
#include<functional>
#include<vector>
#include<algorithm>

using namespace std;

int main()
{

	vector <int> arr {1, 2, 3, 4, 5, 6};
	double total=0;

	for_each(arr.begin(), arr.end(), [&](int x) { total += x; });

	cout << "Sum: " << total << endl;

	return 0;
}