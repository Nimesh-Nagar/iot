


#include<stdio.h>
int arr[5];

void input()
{

	for(int i = 0 ; i <5 ; i++)
	{
		printf("Enter array elements:");
		scanf("%d",&arr[i]);
	}
	
}


int add(){
	int sum = 0;
	for(int i = 0 ; i < 5 ; i++){
		sum = sum  + arr[i];
	}
	printf("Sum is %d\n",sum);
	return sum;
}

void average(int sum){
	printf("Average is %d\n",sum/5)
}




int main()
{
	input();
	int sum = add();
	average(sum);
}
