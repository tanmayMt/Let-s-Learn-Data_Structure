#include<stdio.h>
int main()
{
    int i,key,flag;
    int array1[10];
    
    //Input From User
    printf("--Enter the number for array1--\n");
    for(i=0;i<10;i++)
    {
        printf("Enter array[%d]:",i);
        scanf("%d",&array1[i]);
    }

    //Display value of array1 
    for(i=0;i<10;i++)
        printf("array[%d]=%d  ",i,array1[i]);
    printf("\n");

    //Element which need to search from array1
    printf("Enter the number to be search : ");
    scanf("%d",&key);

    //Linier Searching
    flag=0;
    for(i=0;i<10;i++)
    {
        if(key==array1[i])
        {
            flag=1;
            break;
        }
    }
    if(flag==1)
        printf("The number is found at position at array1[%d]",i);
    else
        printf("The number is not found");


    return 0;
}