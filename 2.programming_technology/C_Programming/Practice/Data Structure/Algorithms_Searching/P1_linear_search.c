//Search an element in an array through 'Linear Search' //eg. 21 56 41 89 12 

#include<stdio.h>

//Linear Search function
void linearSearch(int arr[], int item,int size)
{
    int i = 0;
    while(i<size && item!=arr[i]){
        i++;
    }
    if(i<size){
        printf("%d is position of %d ",i,item);
    }
    else{
        printf("%d not found in arr ",item);
    }

}

int main()
{
    int size,item;

    printf("Please Enter size of array : ");
    scanf("%d",&size);

    int arr[size];

//insert array elements
    printf("Please Enter elements of Array -- ");
    for(int i=0; i<size; i++)
    {
        scanf("%d",&arr[i]);
    }

// Searching elements form array
    printf("Which Value you are Looking for : ");
    scanf("%d",&item);

    linearSearch(arr,item,size);    
    
    return 0;
}