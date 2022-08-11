int sub(int a,int b){
	return a - b;
}

int add(int a, int b){
	return a + b;
}

//wrapper function
int function(int (* f)(int,int),int a,int b){
	return f(a,b);
	//add(a,b)
	//sub(a,b)
}
