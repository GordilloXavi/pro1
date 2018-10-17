

bool isLeap(int year){
 
    return ((year%100 != 0 and year%4 == 0) or (year%100 == 0 and (year/100)%4 == 0)) ;

}

bool is_valid_date(int d, int m, int y){
    
    return !((m == 2 and d==29 and not isLeap(y)) or d<1 or (d>29 and m == 2) or m <1 or d>31 or m>12 or ((m == 4 or m == 6 or m == 9 or m== 11)and d>30));
    
    

}
