// 2. Write a program which accept number from user and print even factors of that number.
// Input:24
// Output: 1 2 4 6 8 12
//////////////////////////////////////////////////////////////////////////////////////////

//     ----------------- Algorithm ----------------- 

/*
    1.START
    2.Accept number from user  as no
    3.then Find its factorial
    4.if factorial is even
    5.Display it
    6.END
*/
//     ---------------    ----------------- 

#include<stdio.h>
//////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name :     DisplayFactor
//  Description :       To check Even factor of the numbers
//  Input :             Integer
//  Output :            Integer
//  Author :           Shete Rushikesh Gopinath
//  Date :              2/11/2022
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////


void DisplayFactor(int iNo)
{
 int i = 0;
 if(iNo<=0)
 {
  iNo = -iNo;
 }
 for (i = 1; i <= iNo;i++)
 
 {
  if((iNo%i)==0 )
  {
  printf("%d \t", i);
 }
}
}
//////////////////////////////////////
// Entry point of the application ///
//////////////////////////////////////
int main()
{
 int iValue = 0;
 printf("Enter your number: ");
 scanf("%d", &iValue);
 DisplayFactor(iValue);
 return 0;
}
///////////////////////////////////////////
//  Result                         ///////
// Input:24                        ///////
// Output: 1 2 4 6 8 12            ///////
///////////////////////////////////////////
