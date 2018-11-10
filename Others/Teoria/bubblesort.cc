#include <iostream>
#include <vector>
#include <ctime>

void printVect(std::vector<int> v){

	std::cout <<"{";

	for(int i = 0; i< v.size()-1; ++i)std::cout << v[i] << ", ";

	std::cout << v[v.size()-1] << "}" << std::endl;


}

void swap(std::vector<int>& v, int index1, int indexL){

	int t = v[indexL];

	v[indexL] = v[index1];

	v[index1] = t;

}

bool sorted(std::vector<int> v){

	int big = v[0];

	for(int i : v){

		if(i<big)return false;
		big = i;

	}

	return true;


}

void bubbleSort(std::vector<int>& vect){

	int sz = vect.size();

	

	while(sz>1 and (not sorted(vect))){

		printVect(vect);
		
		for(int i = 0; i<sz-1; ++i)if(vect[i]>vect[i+1])swap(vect, i, i+1);

		sz--;

	}

	printVect(vect);

}

	

	





std::vector<int> GenerateRandVec(int size, int min, int max){

	srand(time(NULL));

	std::vector<int> v(10);

	for(int i = 0; i<v.size(); ++i)v[i] = min + rand()%(max-min+1);

	return v;

}




int main(){

	std::vector<int> v1 = GenerateRandVec(10,1,50);

	std::vector<int> v2 = {2,46,33,14,22,30,20,10,43,20};

	bubbleSort(v1);

}