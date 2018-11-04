int fatten(int n){

    if(n<10)return n;

    if(fatten(n/10)%10 < n%10) return 10*fatten(n/10) + n%10;

    else return 10*fatten(n/10) + faten(n/10)%10;


    //return 10*fatten(n/10) + (fatten(n/10)%10 < n%10 ?n%10 : fatten(n/10)%10);
    
    //les linies 3 i 4 equivalen a la linia 5

} 


