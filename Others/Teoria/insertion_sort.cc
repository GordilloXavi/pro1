#include <iostream>
#include <vector>

void print_vector(std::vector<int>& v){

	int sz = v.size();

	int i;

	std::cout << "{";

	for(i = 0; i< sz-1; ++i)std::cout << v[i] << ", ";

	std::cout << v[i]<<  "}"<<std::endl;


}

void insert(std::vector<int>& v, int index){

	int n = v[index];

	for(int i = 0; i<index; ++i){

		if(v[i] >= n){



			for(int j = index; j>i; --j){

				v[j] = v[j-1];


			}


			v[i] = n;

		}

	}



}


void insertion_sort(std::vector<int>& vect){

	int sz = vect.size();

	for(int i = 1; i<sz; ++i){

		print_vector(vect);

		insert(vect, i);

	}
	
			print_vector(vect);


}



int main(){

	std::vector<int> v = {9,8,7,6,5,4,3,2,1,0};

	std::vector<int> v2 = {2,-1,5,0,-3,9,4};

	insertion_sort(v2);



}