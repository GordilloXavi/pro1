
bool is_palindromic(int n){

	int n2 = 0;
	
	int x = n;


	while(x>0){

		n2 = 10*n2 + x%10;

		x/=10;

	}


	return n2 == n;


	

}
