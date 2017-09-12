# include <iostream>
# include <string>
# include <thread>
# include "HelloWorld.h"
# include "Variables.h"
# include "TestThread.h"
void test();
int main() {
	std::string output = "Hello World!";
	std::cout << &output << std::endl;

	samuel::getVariables();

	samuel::TestThread *tt = new samuel::TestThread();
	samuel::TestThread *tt2 = new samuel::TestThread();
	tt->start();
	tt->start();
	tt2->start();

	

	delete tt;
	delete tt2;
	
	std::string name;
	std::cout << "Please write something...";
	std::getline(std::cin, name);
	return 0;
}

void test() {
	std::cout << "Test... " << std::endl;
}

