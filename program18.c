// 2. Write a program which accept Array elements and then display its count of  Even Elements  and count of odd elements of  of that numbers 
// Input:1 3 4 2 5
// Output:  even 2 odd 3
//////////////////////////////////////////////////////////////////////////////////////////

//     ----------------- Algorithm -----------------

/*
    1.START
    2.Accept number from user  as no
    3.then Display the numbers
    4.repeat until
        traveolus arry
        if aray elements % 2 is == 0;
          then Evencounter++;
        else 
           Oddcounter++; 
    
    5.Displ even element count of   of that numbers and Odd  element count of   of that numbers
    4.END
*/
//     ---------------    -----------------
#include<stdio.h>
#include<stdlib.h>

//////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name :    CountEvenAndOdd
//  Description :       To Display the even elements count and the Odd elements count
//  Input :             Integer
//  Output :            Integer
//  Author :           Shete Rushikesh Gopinath
//  Date :              2/11/2022
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////
// Step 5 : Perform the operation on array
 void  CountEvenAndOdd(int *ptr,int iLength)
 {
  int iCnt=0, EvenCounter=0, OddCounter=0;
  for (iCnt=0; iCnt<iLength; iCnt++)
  {
   if((ptr[iCnt]%2)==0)
   {
    EvenCounter++;
   }
   else
   {
    OddCounter++;
   }
   }
   printf("The Numbers of even elements are: %d\n", EvenCounter);
   printf("The Numbers of Odd elements are: %d\n", OddCounter);
   return;
 }
//////////////////////////////////////
// Entry point of the application ///
//////////////////////////////////////
int main()
{
 int *ptr = NULL;
 int iLength, iCnt;

 // Step 1 : Accept size of array
 printf("Enter the Length of that Array:\n");
 scanf("%d",&iLength);
 // Step 2 : Allocate memory for array
 ptr = (int *)malloc(sizeof(int)*iLength);
// Step 3 : Accept the elements of array
 printf("Enter your Elements: \n");
 for (iCnt = 0; iCnt < iLength; iCnt++)
 {
  scanf("%d",&ptr[iCnt]);
}

 // Step 4 : Call the function
 CountEvenAndOdd(ptr, iLength);
// Step 6 : Deallocate the memory
 free(ptr);
}
///////////////////////////////////////////
//  Result                         ///////
// Input:4 6 5 4 1 1              ///////
// Output: even 3 odd 3          ///////
///////////////////////////////////////