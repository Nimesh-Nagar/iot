#include<stdio.h>

int main(){
	
	int *pt;
	pt = 1000;
	*pt // data at 1000
	&pt //address of pt

	int **dpt;
	dpt = pt
	*dpt
	**dpt

	dpt = &pt
	*dpt
	**dpt
		
	char a = 200;
	pt = a
	*pt
	pt
	&pt	


	int x = 100
	pt = &x
	*pt
	pt  
	dpt = &pt
	**dpt = 843
	x
	pt
	*dpt = 10000
	x
	pt
	**dpt






	



	return 0;
}
