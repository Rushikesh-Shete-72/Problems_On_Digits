//5. Aceept number from user and check whether number is even or odd
// Input: 12 
//  Output : Even
// Input: 13 
//  Output : Odd
////////////////////////////////////////////////////////////////////////////

//     ----------------- Algorithm ----------------- 

/*
    START
        Accept number from user 
        Divide the number by 2
        if remender is 0
           then the number is even
        else
            the number is odd
        Display the results
    END
*/
//     ---------------    ----------------- 

#include<stdio.h>

#define TRUE 1
#define FALSE 0
typedef int BOOL;
//////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name :     ChkEven
//  Description :       To check whether input is Even or Odd
//  Input :             Integer
//  Output :            Integer
//  Author :           Shete Rushikesh Gopinath
//  Date :              2/11/2022
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////

 ChkEven(BOOL iNo)
{
 if((iNo%2)==0)
 {
 
return TRUE;

 }
   else
 {
  return FALSE;
 }

}
//////////////////////////////////////
// Entry point of the application ///
//////////////////////////////////////
int main()
{
 int iValue=0;
 BOOL bRet = FALSE;
 printf("Enter the number= ");
 scanf("%d", &iValue);
 bRet= ChkEven(iValue);
 //Display Result
if(bRet==TRUE)
{
 printf("The number is even");
}
else
{
 printf("The number is odd");
}

}
//////////////////////////////////////////////////////////////////////////////////////////////////////////
//  Result
//  Input : 3
//  Output : Odd
//  Input : 4
//  Output : Even
//////////////////////////////////////////////////////////////////////////////////////////////////////////
