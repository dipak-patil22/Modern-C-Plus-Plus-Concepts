#include<iostream>
#include<chrono>
#include<thread>
using namespace std;

void run(int count)
{
	while (count-- > 0)
		cout << count << endl;

	std::this_thread::sleep_for(chrono::seconds(3));
}

int main()
{
	std::thread t1(run, 10);
	cout << "main()" << endl;
	cout << "main() after" << endl;

	t1.join();
	if (t1.joinable())
		t1.join();

	cout << "main() after" << endl;

	return 0;
}

//int main()
//{
//	std::thread t1(run, 10);
//	cout << "main()" << endl;
//	cout << "main() after" << endl;
//
//	t1.detach();
//	if (t1.joinable())
//		t1.detach();
//
//	cout << "main() after" << endl;
//
//	return 0;
//}