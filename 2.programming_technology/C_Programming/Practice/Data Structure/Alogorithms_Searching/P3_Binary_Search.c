//P3. Searching elements in array through Binary Search
// Prerequest for binary search is that the array should be sorted. eg # 6 9 15 19 23 29

 #include<stdio.h>

//function for Binary Search 
int binarySearch(int arr[],int size, int item){
    int low , up = size-1 , mid;
    while (low <= up)
    {
        mid = (low+up)/2;
        if(item > arr[mid]){
            low = mid + 1; // search in right half
        }
        else if(item < arr[mid]){
            up = mid - 1;  //search in Left half
        }
        else{
            return mid;
        }
    } 
    return -1; 
}

int main()
{
    int size,item,index;

    printf("Please Enter size of array : ");
    scanf("%d",&size);

    int arr[size];

//insert array elements
    printf("Enter elements in Ascending order -- ");
    for(int i=0; i<size; i++)
    {
        scanf("%d",&arr[i]);
    }

// Searching elements form array
    printf("Which Value you are Looking for : ");
    scanf("%d",&item);

    index = binarySearch(arr,size,item);    

    if(index == -1){
        printf("%d not found in array \n",item);
    }
    else{
        printf("%d is at position %d \n",item,index);
    }
    
    return 0;
}