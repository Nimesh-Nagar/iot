#include<stdio.h>
#include<math.h>
#include<string.h>

int main(){
	char *name = "Siddhant";
	char str[100];
	printf("%d\n",strlen(name));
	strcpy(str,name);
	printf("%s\n",str);
	printf("%f\n",pow(3,2));
	printf("%f\n",sqrt(4));
	return 0;
}
