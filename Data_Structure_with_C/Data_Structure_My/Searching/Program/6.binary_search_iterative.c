#include<stdio.h>
int binarySearch(int array2[],int high,int low,int key2)
{
    while(low <= high)
    {
        int mid = (low + high) / 2;
        if(array2[mid] == key2)
          return  mid;
      else if(array2[mid]<key2)
              low=mid+1;
         else
             high=mid-1;
    }
    return -1;
    
}
int main()
{
    int array_size1,i,key1,index1;
    int array1[array_size1];
    
    //Take Array Size
    printf("Enter the size of the array: ");
    scanf("%d",&array_size1);

    //Take Array Elements 
    printf("--Enter the Elements in assending or desending order for array1--\n");
    for(i=0;i<array_size1;i++)
    {
        printf("Enter array[%d]: ",i);
        scanf("%d",&array1[i]);
    }
    //Chose element to be search
    printf("Enter the elements to be search: ");
    scanf("%d",&key1);

    //Calling 'binarySearch()' function
    index1=binarySearch(array1,array_size1-1,0,key1);

    //Cheack the return value of the function 'binarySearch()'
    if (index1 == -1)
        printf("The element is not found\n");
    else
        printf("Element is found at position %d\n",index1);
    return 0;
}