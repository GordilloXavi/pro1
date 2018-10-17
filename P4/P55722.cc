int number_of_digits(int n){
    
    int d = 1;
    
    while(n>9){
        d++;
        n /= 10;
    }
    
    return d;    
}
