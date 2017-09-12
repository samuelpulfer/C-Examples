#include "TestThread.h"
#include <string>
#include <chrono>
#include <thread>
#include <iostream>
#include "TestThread.h"

namespace samuel {
	//Constructor
	TestThread::TestThread() {
		std::cout << "I'm the constructor" << std::endl;
	}
	//Destructor
	TestThread::~TestThread() {
		std::cout << "I'm the destructor" << std::endl;
	}
	//Functions
	void TestThread::incInteger() {
		IntegerOne++;
	}
	void TestThread::sleepFor(int x = 1000) {
		std::this_thread::sleep_for(std::chrono::milliseconds(x));
	}
	void TestThread::run() {
		for (int i=0; i < 10; i ++) {
			std::cout << "Value of IntegerOne : " << IntegerOne << std::endl;
			IntegerOne++;
			sleepFor();
		}
	}
	void TestThread::start() {
		std::thread t1;
		t1 = std::thread(&TestThread::run,this);
		t1.join();
	}
}