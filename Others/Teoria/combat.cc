#include <ctime>
#include <iostream>

class Warrior{

	private:

		int health;

		std::string name;

		

	public: 

		int getHealth(){return health;}
		std::string getName(){return name;}
		void setHealth(int h){

			if(h>0) health = h;
			else health = 0;

		}

		

		

		void displayHealth(){

			int h = getHealth();

			std::cout << "(" << getHealth() << ") "<< getName() << ":  ";

			for(int i = 0; i<h; ++i)std::cout << "*";

			std::cout << std::endl; 

		}

		

		void attack(Warrior& w2){

			

			srand(rand()%30 + time(NULL));

			int crit = rand()%11;

			int d = rand()%11;

			if(crit == 0){

				d *=2;

			}

			std::cout << name << " attacks " << w2.name << " and deals " << d << " damage.\n";

			w2.setHealth(w2.getHealth() - d);

			if(crit == 0){

				std::cout << "CRITICAL hit!\n";

			}

			if(w2.getHealth() >= getHealth()){
			w2.displayHealth();
			
			displayHealth();
			}else{
				displayHealth();
				w2.displayHealth();
			}


			

			std::cout << "\n\n";

			if(w2.getHealth() == 0)std::cout << getName() << " is VICTORIOUS with " << getHealth() << " health!!\n";

		}

		Warrior(std::string name, int helath){

			

			this -> health = health;

			this -> name = name;

		}

		Warrior(std::string name){

			

			this -> name = name;

			health = 50;


		}


};

void fight(Warrior& w1, Warrior& w2){

	std::cout << "\n#############FIGHT!!#############\n\n";

	bool b = (rand()%2 == 0) ? true : false;

	while(w1.getHealth() > 0 and w2.getHealth() > 0){

		if(b)w1.attack(w2);
		else w2.attack(w1);
		b = not b;


	}

	std::cout << "Game Over" << std::endl;


}






int main(){

	std::string n1,n2;

	std::cout << "Input name of first warrior: \n";

	std::cin >> n1;

	std::cout << "Input name of second warrior: \n";

	std::cin >> n2;

	Warrior w1(n1);
	Warrior w2(n2);

	fight(w1,w2);

	



}