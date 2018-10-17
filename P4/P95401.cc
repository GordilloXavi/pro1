bool is_leap_year(int year){
 
    return ((year%100 != 0 and year%4 == 0) or (year%100 == 0 and (year/100)%4 == 0)) ;

}
