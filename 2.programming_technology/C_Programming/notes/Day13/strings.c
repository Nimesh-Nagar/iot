#include<stdio.h>

int main(){
	char str[100]; //On Stack
	char *name = "Siddhant"; //read only memory //We can access char by index
	//Its on string pool
	printf("Enter some value for str : ");
	scanf("%s",str);

//	printf("Enter some name :");
//	scanf("%s",*name);
	printf("%c\n",name[1]);
	name[1] = 'x';
	printf("%c\n",name[1]);
	return 0;
}
