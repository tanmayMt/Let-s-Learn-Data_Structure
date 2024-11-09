#include<stdio.h>
int main()
{
    int i,key,low,hig,mid,flag;              //Declaration of variables
    int array1[7]={45,65,88,98,106,115,120}; //Declaration of the Array

    //Printing the value of array elements
    for(i=0;i<7;i++)  
        printf("array[%d]=%d ",i,array1[i]);

    // key value to be search
    printf("\nEnter the number to be search:");
    scanf("%d",&key);   

    low=0;
    hig=6;
    flag=0;
    while(low <= hig)
    {
        mid=(low+hig)/2;
        if(array1[mid]==key)
        {
            flag=1;
            break;
        }
        else if(key<array1[mid])
            hig=mid-1;
        else
            low=mid+1;
    }//end of while loop

    if(flag==1) // Check the flag value is modified or not
       printf("The number is found at posistion array[%d] \n",mid);
    else
       printf("The number is not found");
    
    return 0;
}