#include <iostream>
#include <string>
#include <vector>
int main(){

	std::vector<std::string> v(7);
	for(int i = 0; i<7;++i)getline(std::cin, v[i]);

	std::string name =v[0], gender=v[2], city=v[3], sport=v[4], team=v[5], job=v[6];
	int age =stoi(v[1]);

	
	std::string pron = (gender == "girl") ? "she" : "he";
	std::string pos = (gender == "girl") ? "her" : "his";

	std::string h = (gender == "girl") ? "She" : "He";
	printf("%s is a %d year-old %s. %s is living with %s parents in an apartment in the centre of %s, where %s hangs out with %s friends. Moreover, in %s free time %s plays %s in a team called %s. %s would like to pursue a career in %s when %s is older, that's why %s is studying hard.\n", name.c_str(), age, gender.c_str(), h.c_str(), pos.c_str(), city.c_str(), pron.c_str(), pos.c_str(), pos.c_str(), pron.c_str(), sport.c_str(), team.c_str(), name.c_str(), job.c_str(), pron.c_str(), pron.c_str() );


}