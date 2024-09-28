#include<iostream>
#include<thread>
#include<mutex>
#include<chrono>
#include<algorithm>
using namespace std;
using namespace std::chrono;


using namespace std;

int myAmount = 0;
mutex m;

void addMoney()
{
	m.lock();
	myAmount++;
	std::this_thread::sleep_for(chrono::seconds(3));
	m.unlock();
}

int main()
{
	auto startTime = high_resolution_clock::now();

	thread t1(addMoney);
	thread t2(addMoney);

	t1.join();
	t2.join();

	cout << myAmount<<endl;

	auto stopTime = high_resolution_clock::now();
	auto duration = duration_cast<microseconds> (stopTime - startTime);

	cout << duration.count() / 1000000 << endl;


	return 0;
}