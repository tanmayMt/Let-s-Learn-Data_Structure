#include<stdio.h>
//Time Complexity:O(n)
int delete_first_item_from_array(int [],int);
int main()
{
    int arr[]={23,3,45,12,67,54,6,4};
    int size=sizeof(arr)/sizeof(arr[0]);

    size=delete_first_item_from_array(arr,size);
    //Printing array elements
    for (size_t i = 0; i < size; i++)
        printf("%d ",arr[i]);
}

int delete_first_item_from_array(int arr1[], int size1)
{
    printf("After delete first item from array:\n");
    if(size1=0)
      printf("Array is empty!!");
    for (size_t i = 0; i < size1-1; i++)
        arr1[i]=arr1[i+1];
    return size1-1;
}