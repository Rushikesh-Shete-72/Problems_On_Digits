//////////////////////////////////////////////////////////////////////////////////////////////////////////
// Problem statement :  Accept number from user and check whether it is divisible by 5 & 3 or not
//
// Input : 23

// Output : 23 is not divisible by 5 
//

//Input : 30
// Output :26 is divisible by 5 & 3
//
// Input : -60
// Output : -20 is divisible by 5
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////
//     ----------------- Algorithm ----------------- 

/*
    START
        Accept number from user as NO

        check  that when  Nomber is divisible  5 & 3 what is it's  remainder
        If the value of that is  0
            Then display as NO is divisible by 5 & 3
        Otherwise
            display as NO is not divisible by 5  &3
    END
*/
//     ---------------           ----------------- 

#include<stdio.h>
#include<stdbool.h>
//////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name :     DivisibleByThreeAndFive
//  Description :       To check whether input is divisible by 5 or not
//  Input :             Integer
//  Output :            Integer
//  Author :           Shete Rushikesh Gopinath
//  Date :              2/11/2022
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////

bool DivisibleByThreeAndFive(int iNo)
{
    if((iNo % 3 == 0) && (iNo % 5 == 0))
    {
        return true;
    }
    else
    {
        return false;
    }
}
/* 
------------Alternate Body Server function of  Multiplication------------

  bool DivisibleByThreeAndFive(int iNo)
   {
    if(iNo % 3 == 0)
    {
        if(iNo % 5 == 0)
        {
             return true;
        }
        else
        {
            return false;
        }
    }
    else
    {
        return false;
    }
   }
*/

int main()
{
    int iValue = 0;
    bool bRet = false;

    printf("Enter number : \n");
    scanf("%d",&iValue);

    bRet = DivisibleByThreeAndFive(iValue);
    if(bRet == true)
    {
        printf("Number if divisible by 3 and 5\n");
    }
    else
    {
        printf("Number is not divisible by 3 or 5\n");
    }
    return 0;
}
//////////////////////////////////////////////////////////////////////////////////////////////////////////
//  Result
//  Input : 30
//  Output : 30 is divisble by 5 & 3
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////
