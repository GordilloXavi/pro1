int double_factorial(int x){

	int f = 1;

	while(x>1){
		
		f*=x;
		x-=2;

	}

	return f;
}
