// 2. Write a program which accept Array elements and then display its count of  Even Elements of  of that numbers 
// Input:1 3 4 2 5
// Output: 2
//////////////////////////////////////////////////////////////////////////////////////////

//     ----------------- Algorithm -----------------

/*
    1.START
    2.Accept number from user  as no
    3.then Display the numbers
    4.repeat until
        traveolus arry
        if aray elements % 2 is == 0;
          then counter++;
        else 
          continue  
    
    5.Displ even element count of   of that numbers
    4.END
*/
//     ---------------    -----------------
#include<stdio.h>
#include<stdlib.h>

//////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name :    CountEven
//  Description :       To Display the even elements count
//  Input :             Integer
//  Output :            Integer
//  Author :           Shete Rushikesh Gopinath
//  Date :              2/11/2022
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////
// Step 5 : Perform the operation on array
int CountEven(int Arr[], int iSize)
{
    int iCnt =0, iEvenCnt = 0;

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if((Arr[iCnt] % 2) == 0)
        {
            iEvenCnt++;
        }
    }
    return iEvenCnt;
}
//////////////////////////////////////
// Entry point of the application ///
//////////////////////////////////////
int main()
{
    int *ptr = NULL;
    int iLength = 0, i = 0, iRet = 0;

    // Step 1 : Accept size of array
    printf("Enter number of elements : \n");
    scanf("%d",&iLength);

    // Step 2 : Allocate memory for array
    ptr = (int *)malloc(iLength * sizeof(int));

    // Step 3 : Accept the elements of array
    printf("Enter the elements : \n");

    for(i = 0 ;i < iLength; i++)
    {
        scanf("%d",&ptr[i]);
    }

    // Step 4 : Call the function
    iRet = CountEven(ptr, iLength);

    printf("Number of even elements are : %d\n",iRet);

    // Step 6 : Deallocate the memory
    free(ptr);

    return 0;
}
///////////////////////////////////////////
//  Result                         ///////
// Input:4 6 5 4 1 1              ///////
// Output: 3                    ///////
///////////////////////////////////////