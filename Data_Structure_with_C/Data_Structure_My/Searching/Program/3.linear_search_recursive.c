#include<stdio.h>
int linearSearch(int array2[],int array_size2,int key2)
{
    int flag;
    array_size2--;
    if(array_size2 >= 0)
    {
        if(key2 == array2[array_size2])
           return array_size2;
        else
           flag=linearSearch(array2,array_size2,key2);
    }
    else
        return -1;
    return flag;
}
int main()
{
    int array_size1,i,key1,result1;
    int array1[array_size1];
    
    printf("Enter the size of the array:");
    scanf("%d",&array_size1);

    //Take Input for array
    printf("--Enter elements for the array--\n");
    for ( i = 0; i < array_size1; i++)
    {
        printf("Enter array1[%d]: ",i);
        scanf("%d",&array1[i]);
    }
    
    //Display Array elements
    for(i=0;i<array_size1;i++)
        printf("array1[%d]=%d,",i,array1[i]);

    //Element which need to search from array1
    printf("\nEnter the number to be search : ");
    scanf("%d",&key1);

    //Calling linear Search funcltion
    result1 = linearSearch(array1,array_size1,key1);

    if (result1 != -1)
        printf("The element %d is found at position array1[%d]",key1,result1); 
    else
        printf("The element is not found");


    return 0;
}