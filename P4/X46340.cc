#include<iostream>
int sum_min_max(int x, int y, int z){return std::min(x, std::min(y, z)) + std::max(std::max(x,y),z);}


