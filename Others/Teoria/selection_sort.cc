#include <iostream>
#include <vector>

void print_vector(std::vector<int>& v){

	int sz = v.size();

	int i;

	std::cout << "{";

	for(i = 0; i< sz-1; ++i)std::cout << v[i] << ", ";

	std::cout << v[i]<<  "}"<<std::endl;


}


void swap(std::vector<int>& v, int a, int b){

	int t = v[a];

	v[a] = v[b];

	v[b] = t; 


}

int smallest_position(std::vector<int>& v, int a, int b){

	int smallest = v[a];

	int pos = a;

	for(int i = a+1; i<=b; ++i){

		if(v[i] < smallest){

			smallest = v[i];
			pos = i;

		}

		}

		return pos;

}

void selection_sort(std::vector<int>& vect){

	int sz = vect.size();

	for(int i = 0; i< sz; ++i){

		print_vector(vect);


		int smallest = smallest_position(vect, i, sz-1);

		swap(vect, i, smallest);

	}

	print_vector(vect);
	

}



int main(){

	std::vector<int> v = {9,8,7,6,5,4,3,2,1,0};

	std::vector<int> v2 = {5,4,3,2,1};

	selection_sort(v);



}