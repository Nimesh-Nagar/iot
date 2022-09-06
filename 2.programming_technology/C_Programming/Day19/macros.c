#include<stdio.h>
#define PI 3.14 
//All # symbols are preprocessed
//All names will be replaced by expression at preprocessinbg phase

#define square(arg) (arg*arg)
#define valid(arg) (arg<100)

int main(){
	int rad = 20;
	if(valid(rad)){
		printf("Area is %f\n",PI*square(rad));
	}
	printf("time = %s",__TIME__);
	printf("stdc = %s",__STDC__);
	printf("date = %s",__DATE__);
	printf("file = %s",__FILE__);
	return 0;
}
