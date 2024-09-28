#include<iostream>
#include<thread>
#include<mutex>

using namespace std;

recursive_mutex m1;

int increment = 0;

void recursion(int i, int count)
{
	if (count < 0)
		return;

	m1.lock();
	cout << "Thread: " << i << " = " << ++increment << endl;
	recursion(i, --count);
	m1.unlock();
	cout << "unlock by thread" << i << endl;
}

int main()
{
	thread t1(recursion, 1, 10);
	thread t2(recursion, 2, 10);

	t1.join();
	t2.join();

	return 0;
}