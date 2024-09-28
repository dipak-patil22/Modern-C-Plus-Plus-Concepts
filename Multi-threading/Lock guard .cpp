#include<iostream>
#include<thread>
#include<mutex>

using namespace std;

mutex m1;

int increment = 0;

void task(int i, int count)
{
	lock_guard<mutex> lock(m1);
	for(int j=0; j< count; j++)
		cout << "Thread: " << i << " = " << ++increment << endl;
}

int main()
{
	thread t1(task, 1, 10);
	thread t2(task, 2, 10);

	t1.join();
	t2.join();

	return 0;
}