#include <iostream>
#include <cmath>

int main() {
    
    std::cout.setf(std::ios::fixed);
    std::cout.precision(6);
    
    int a;
    
    while(std::cin >> a){
        
        std::cout << a*a << " " << sqrt(a) << std::endl;
        
    }
    
    
}
