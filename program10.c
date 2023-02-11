// 1. Write a program which aceept one umber from user and print that number of even nubesrs of even nubers on screen.
//Input: 7
// 2 4 6 8 10 12 14
////////////////////////////////////////////////////////////////////////////
//     ----------------- Algorithm ----------------- 

/*
    1.START
    2.Accept number from user  as frequency 
    3.then Display the Even  nubers of frequncy
    4.END
*/
//     ---------------    ----------------- 

#include<stdio.h>
//////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name :     DisplayEven
//  Description :       To print  Even nubers of time given numbers
//  Input :             Integer
//  Output :            Integer
//  Author :           Shete Rushikesh Gopinath
//  Date :              2/11/2022
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////

void DisplayEven(int iNo)
{
 int iCnt = 0;
 int iEven = 0;
 if (iNo <= 0)
 {
  return;
}
for (iCnt=1;iCnt<=iNo; iCnt++)
{
 iEven = iEven + 2;
 printf("%d \t", iEven);
 }
}
//////////////////////////////////////
// Entry point of the application ///
//////////////////////////////////////
int main()
{
 int ivalue = 0;
 printf("Enter your numbers= ");
 scanf("%d",&ivalue);
 DisplayEven(ivalue);
 return 0;
}
//////////////////////////////////////////////////////////////////////////////////////////////////////////
//  Result
//  Input : 7
//  Output : 2 4 6 8 10 12 14
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////
