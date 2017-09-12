#pragma once
#include <string>
#include <thread>


namespace samuel {

	class TestThread {
	private:
		int IntegerOne = 0;
		std::string StringOne = "Hello World";

		void incInteger();

		void sleepFor(int x);

	public:
		//Constructor
		TestThread();

		//Destructor
		~TestThread();

		void run();
		void start();
	};


}