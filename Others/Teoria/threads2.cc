#include <cstdlib>
#include <iostream>
#include <string>
#include <vector>
#include <ctime>
#include <numeric>
#include <cmath>
#include <sstream>
#include <thread>
#include <chrono>
#include <ctime>
#include <mutex>//Dont need most of thse libraries

//SUPER IMPORTANT!!!
//you need to use the following command in the linux shell:
// g++ threads2.cc -lpthread
//or else the program wont run

std::string GetTime(){

	auto nowTime = std::chrono::system_clock::now();

	std::time_t sleepTime = std::chrono::system_clock::to_time_t(nowTime);

	return std::ctime(&sleepTime);

}

double acctBalance = 100;

std::mutex acctLock;//This will prevent multiple threads to access
//a block of code at once (which may cause problems)

void Getmoney(int id, double withdrawal){

	std::lock_guard<std::mutex> lock(acctLock);

	std::this_thread::sleep_for(std::chrono::seconds(3));

	std::cout << id << " tries to withdrawal " << withdrawal << "€."<< std::endl;

	if(acctBalance - withdrawal >= 0){

		acctBalance -= withdrawal;

		std::cout << "New account balance: " << acctBalance << std::endl;


	}else{

		std::cout << "Not enough money in the account." <<
		" Current balance is: " << acctBalance << ".\n";


	}




}


int main(){

	std::thread threads[10];

	for(int i = 0; i< 10 ; ++i){

		threads[i] = std::thread(Getmoney, i, 15);

	}
	for(int i = 0; i< 10 ; ++i){

		threads[i].join();

	}

}