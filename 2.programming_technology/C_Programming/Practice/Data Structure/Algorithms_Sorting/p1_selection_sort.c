#include<stdio.h>

// function for sorting
void selection_sort(int arr[], int n){
    for(int j=0; j<n-1; j++)
    {
    // finding index for smallest number 
        int min = j;
        for(int k=j+1; k<n; k++)
        {
            if(arr[min] > arr[k]){
                min = k;
            }
        }
        if(j!=min){                 //swaping the smallest number
            int temp = arr[j];
            arr[j]=arr[min];
            arr[min] = temp;
        }
    }
    printf("\nSorted Array is : ");
    for(int j=0; j<n; j++){
        printf("%d ",arr[j]);
    }

}

int main()
{
    int size;

    printf("Enter size of array : ");
    scanf("%d",&size);
    
    int arr[size];

    //Asking user to enter elements of array 
    for(int i=0; i<size; i++){
        printf("Enter value for arr[%d] : ",i);
        scanf("%d",&arr[i]);
    }
    //Display original array
    printf("\n");
    for(int i=0; i<size; i++){
        printf("%d ",arr[i]);
    }

    selection_sort(arr,size);
    

}
