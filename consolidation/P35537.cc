bool is_increasing(int n){

    if(n < 10)return true;

    if(n%10 >= n%100/10)return is_increasing(n/10);

    return 0;


} 
