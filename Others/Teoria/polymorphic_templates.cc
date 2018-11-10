#include <iostream>
#include <vector>
#include <memory>

class Pizza{

public:

	virtual void MakePizza() = 0;


};

class NYStyleCrust{

public:

	std::string addIngredients(){

		return "Crust so thin you can C through it.\n";

	}


};

class DeepDishCrust{

public:

	std::string addIngredients(){

		return "Chicago deep dish.\n";

	}


};

template<typename T>
class LotsOfMeat: public T{

public:
	std::string addIngredients(){

		return "Lots of random meat.\n" + T::addIngredients();
	}

};

template<typename T>
class Vegan: public T{

public:
	std::string addIngredients(){

		return "Vegan Cheese and Veggies.\n" + T::addIngredients();
	}

};

template<typename T>
class MeatNYStyle: public T, public Pizza{

public:

	void MakePizza(){

		std::cout << "Meat NYStyle: " <<
		T::addIngredients();

	}


};

template<typename T>
class VeganDeepDish: public T, public Pizza{

public:

	void MakePizza(){

		std::cout << "Vegan Deep Dish: " <<
		T::addIngredients();

	}


};



int main(){
	
	std::vector<std::unique_ptr<Pizza>> pizzaOrders;

	pizzaOrders.emplace_back(new MeatNYStyle<LotsOfMeat<NYStyleCrust>>());

	pizzaOrders.emplace_back(new VeganDeepDish<Vegan<DeepDishCrust>>());

	for(auto &pizza : pizzaOrders){

		pizza -> MakePizza();

	}

}