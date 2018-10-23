int fatten(int n){

    if(n<10)return n;

    return 10*fatten(n/10) + (fatten(n/10)%10 < n%10 ?n%10 : fatten(n/10)%10);

} 
