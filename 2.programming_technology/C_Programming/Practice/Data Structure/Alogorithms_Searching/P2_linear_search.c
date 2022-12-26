/* Number of "Unsuccessful search can be reduced" if array is sorted. 
   In this case we need not have to search till end of list, we can terminate our search as soon as we find an element that is
   greater or equal to the search item in ascending array.
*/ // 5 6 7 8 9 


#include<stdio.h>
//function to find the value
void linearSearch(int arr[],int item, int n)
{
   int i = 0;
   while(i<n && arr[i] < item){
      i++;
   }
   if(arr[i] == item){
      printf("%d is position of %d \n",i,item);
   }
   else{
      printf("%d not found in array \n",item);
   }

}   
   

int main()
{
    int size,item;

    printf("Please Enter size of array : ");
    scanf("%d",&size);

    int arr[size];

//insert array elements
    printf("Array elements in Ascending Order -- ");
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