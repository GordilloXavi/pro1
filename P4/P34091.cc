bool is_perfect(int n){
	
	int sum = 1;

	for(int i = 2; i<n; ++i)if(!(n%i))sum += i;

	return ( n!= 1 and n==sum);
}
