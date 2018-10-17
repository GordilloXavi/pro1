#include <iostream>
#include <string>
#include <chrono>
#include <algorithm>
#include <vector>
#include <cmath>

//TODO: limpiar el código y arreglar mil bugs

struct number{

	int n;
	std::string nb;
	int b;
	std::string newn;
	int newb;

};


number createNumber(int dif);

void eval(number& n, int& score);

std::string change_base_nb(number& num);

std::string change_base_newn(number& num);

// --------------


number createNumber(int dif){//Creates a new random number

	srand(time(NULL));

	std::vector<int> bases = {2,8,10,16};

	int r1 = rand()%4;

	int r2 = (r1 == 0 ? 1+rand()%3 : 0);

	number num;

	num.n = rand()%65*int(pow(2,dif*dif-1));//Aumentar num para aumentar dificultad

	num.b = bases[r1];

	num.newb = bases[r2];

	num.nb = change_base_nb(num);//Converts n(dec) to a string nb with base b

	num.newn = change_base_newn(num);//Converts n(dec) to a string newn with base newb


	//DEBUG!!!
	/*
	std::cout << "n = " << num.n << std::endl;
	std::cout << "nb = " << num.nb << " in base " << num.b << std::endl;
	std::cout << "newn = " << num.newn << " in base " << num.newb << std::endl;
	*/

	return num;

	




}


std::string change_base_nb(number& num){//Converts n(dec) to a string nb with base b

	if(num.b == 10)return std::to_string(num.n);

	std::string s;

	int n = num.n;

	while(n>0){

		int x = n%num.b;

		char c;

		if(num.b == 16 and x>=10){

			c = char(65+(x%10));	

		}else c = '0'+x;

		s+=c;

		n/=num.b;

	}

	std::reverse(s.begin(),s.end());

	return s;


}

std::string change_base_newn(number& num){//Converts n(dec) to a string newn with base newb

	if(num.newb == 10)return std::to_string(num.n);

	std::string s;

	int n = num.n;

	while(n>0){

		int x = n%num.newb;

		char c;

		if(num.newb == 16 and x>=10){

			c = char(65+(x%10));	

		}else c = '0'+x;

		s+=c;

		n/=num.newb;

	}

	std::reverse(s.begin(),s.end());

	return s;

}


void eval(number& n, int& score){//Evaluates if the input is equal to n.newn

	std::cout << n.nb << " (base " << n.b << ") to base " << n.newb << ":\n";

	std::string s;

	std::cin >> s;

	if(s == n.newn){

		score++;

		std::cout << "Correct answer!!!  Score: " << score << std::endl;

	}else{

		score = 0;

		std::cout << "Incorrect answer (right answer: " << n.newn << ")\n";

	}


}



int main() {

	int score = 0;

	int dif;

	std::cout << "Choose difficulty (1 = easy, 2 = medium, 3 = hard, 4 = absolute madness): \n";

	std::cin >> dif;

	if(!(dif > 0 and dif < 5))std::cout << "You really don't want anything harder than 4...\n";

	else{
		while(true){

			number n = createNumber(dif);

			eval(n, score);

		}

	}

}





