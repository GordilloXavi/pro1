#include <iostream>
#include <fstream>
#include <vector>
#include <string>

//TODO= NO DISTINGUIR UPPER DE LOWER.

void display(std::vector<std::string> v);
std::vector<std::string> getLyrics(std::string filename);


class Analyzer{

	private:

		std::vector<std::string> words, top;
		std::vector<int> reps;

	std::vector<std::string> getLyrics(std::string filename, int& total_words);

	void display(std::vector<int>& reps, std::vector<std::string>& top, int t, int total_words);

	void setTop(std::vector<int>& reps,std::vector<std::string>& top,std::vector<std::string>& v);

	void sortTop(std::vector<int>& reps, std::vector<std::string>& top);

	void swap(std::vector<int>& v, int index1, int indexL);

	void swap(std::vector<std::string>& v, int index1, int indexL);

	bool sorted(std::vector<int>& v);

	void bubbleSort(std::vector<int>& reps, std::vector<std::string>& top);



	public:

		Analyzer(std::string filename, int t){

			int total_words;

			words = getLyrics(filename, total_words);

			setTop(reps,top,words);

			display(reps, top, t, total_words);


		}


};

//###################




void Analyzer::swap(std::vector<int>& v, int index1, int indexL){

	int t = v[indexL];

	v[indexL] = v[index1];

	v[index1] = t;

}
void Analyzer::swap(std::vector<std::string>& v, int index1, int indexL){

	std::string t = v[indexL];

	v[indexL] = v[index1];

	v[index1] = t;

}

bool Analyzer::sorted(std::vector<int>& v){

	int big = v[0];

	for(int i : v){

		if(i<big)return false;
		big = i;

	}

	return true;


}

void Analyzer::bubbleSort(std::vector<int>& reps, std::vector<std::string>& top){

	int sz = reps.size();

	

	while(sz>1 and (not sorted(reps))){

		
		
		for(int i = 0; i<sz-1; ++i){

			if(reps[i] < reps[i+1]){

				swap(reps, i, i+1);
				swap(top, i, i+1);


			}

		}

		sz--;

	}

	

}


void Analyzer::sortTop(std::vector<int>& reps, std::vector<std::string>& top){


}


void Analyzer::setTop(std::vector<int>& reps, std::vector<std::string>& top,std::vector<std::string>& v){

	int sz = words.size();

	bool b = true;

	for(int i = 0; i< sz; ++i){

		b = true;

		int g = top.size();

		if(words[i] != ""){for(int j = 0; j<g; ++j){

			if(words[i] == top[j]){

				++reps[j];

				b = false;

			}

		}
		if(b){
		top.push_back(words[i]);
		reps.push_back(1);
	}

	}}

	bubbleSort(reps,top);

	


}




std::vector<std::string> Analyzer::getLyrics(std::string filename, int& total_words){

	total_words = 0;

	std::vector<std::string> words(0);

	std::fstream file_stream;

	std::string st = "";

	file_stream.open(filename, std::fstream::in );

	if(file_stream.is_open()){

		while(file_stream.good()){

			getline(file_stream, st, ' ');

			total_words++;

			if(st.size() > 0)words.push_back(st);

		}



	}

	file_stream.close();

	return words;


}

void Analyzer::display(std::vector<int>& reps, std::vector<std::string>& top ,int t, int total_words){


	std::cout << "LIST OF MOST REPEATED WORDS:\n\n";

	int sz = reps.size();

	double perc;

	for(int i = 0; i< t and i < sz; ++i){

		perc = double(reps[i])/total_words * 100;

		std::cout << (i+1) << ") \"" << top[i] << "\", repeated " 
		<< reps[i] << " times (" << perc << "%)." << std::endl;
		

	}

	std::cout << "Total words:" << total_words << ".\n\n";

}






int main(){

	int t = 0;

	std::cout << "How many words do you want to see?\n";

	std::cin >> t;


	//Analyzer an("/home/xavigr00/Downloads/fm.txt", t);

	Analyzer anal("lyrics.txt",t);

	


}

