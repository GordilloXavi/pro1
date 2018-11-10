#include <iostream>
#include <vector>

void printVect(std::vector<int>& v, int index = 0){//index always 0;

	if(index==v.size()-1){

		std::cout << v[v.size()-1] << std::endl;

	}else{

		std::cout << v[index] << " ";

		printVect(v,index+1);
	}

	

}

int fib(int n){

	if(n<2)return n;

	return fib(n-1) +fib(n-2);



}


int main(){

	std::vector<int> v = {10,8,2,420};

	printVect(v);

	std::cout << fib(8) << std::endl;


}