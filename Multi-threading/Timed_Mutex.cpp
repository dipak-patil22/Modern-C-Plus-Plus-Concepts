#include<iostream>
#include<thread>
#include<mutex>
#include<chrono>
#include<algorithm>
using namespace std;
using namespace std::chrono;


using namespace std;

int myAmount = 0;
timed_mutex m;

void addMoney(int i)
{
	if (m.try_lock_for(std::chrono::seconds(2)))
	{
		myAmount++;
		std::this_thread::sleep_for(chrono::seconds(1));
		cout << "Thread" << i << " Entered" << endl;
		m.unlock();
	}
	else
		cout << "Thread" << i << " Couldn't Entered" << endl;
}

//void addMoney(int i)
//{
//	auto now = std::chrono::steady_clock::now();
//
//	if (m.try_lock_until( now + std::chrono::seconds(1)))
//	{
//		myAmount++;
//		std::this_thread::sleep_for(chrono::seconds(1));
//		cout << "Thread" << i << " Entered" << endl;
//		m.unlock();
//	}
//	else
//		cout << "Thread" << i << " Couldn't Entered" << endl;
//}


int main()
{
	auto startTime = high_resolution_clock::now();

	thread t1(addMoney,1);
	thread t2(addMoney,2);

	t1.join();
	t2.join();

	cout << myAmount << endl;

	auto stopTime = high_resolution_clock::now();
	auto duration = duration_cast<microseconds> (stopTime - startTime);

	cout << duration.count() / 1000000 << endl;


	return 0;
}