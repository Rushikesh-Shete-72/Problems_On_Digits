// 4. Accept two numbers form user and display first number in second number of times.
// Input: 12 5
//  Output : 12 12 12 12 12
// Input: -2 3
//  Output : -2 -2 -2
// Input: 21 -3
//  Output : 21 21 21
// Input: -2 0;
//  Output :
//     ----------------- Algorithm ----------------- 

/*
    START
        Accept number from user as first  No & second Frequncy
       Display the no in frequncy of time
    END
*/
//     ---------------           ----------------- 


#include<stdio.h>
//////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name :     Display
//  Description :       To check whether input is divisible by 5 or not
//  Input :             Integer
//  Output :            Integer
//  Author :           Shete Rushikesh Gopinath
//  Date :              2/11/2022
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////

void Display(int iNo,int iFrequency)
{

 int iCnt = 0;
 for(iCnt=1;iCnt<=iFrequency;iCnt++)
 {
  printf("%d", iNo);
 }
 }

//////////////////////////////////////
// Entry point of the application ///
//////////////////////////////////////
int main()
{
 int iValue = 0;
 int iCnt = 0;
 printf("Enter your number= ");
 scanf("%d", &iValue);
 printf("Enter your Frequency= ");
 scanf("%d", &iCnt);
 Display(iValue, iCnt);
 return 0;

}
//////////////////////////////////////////////////////////////////////////////////////////////////////////
//  Result
//  Input : 3
//  Input : 4
//  Output : 3 3 3 3
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////
