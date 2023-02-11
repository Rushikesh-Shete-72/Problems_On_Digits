//program to give input two numbers  from users and display its of Addtions
//     ----------------- Algorithm ----------------- 


/*
    START
        Accept number from user as NO

        Add  that two numbers
            Then display it's Additions
    END
*/

///////////////////////////////////////////////////////////////////////////////
#include<stdio.h>
//////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name :    Addition
//  Description :       To Addition the two numbers
//  Input :             Integer
//  Output :            Integer
//  Author :            Shete Rushikesh Gopinath (MI10011)
//  Date :              2/11/2023
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////

int Addition(int iNo1,int iNo2) // The body of  server function--Addition()
{
 int iAns = 0;
 return (iAns = (iNo1 + iNo2)); // return the additon 

}
//  Entry point of the application
int main()
{
 int iValue1 = 0, iValue2 = 0, iRet = 0; // declare the  variable
 // Take input from user
 printf("\nCalculate your values\n");

 printf("Enter your first Number: ");
 scanf("%d", &iValue1);
 printf("\nEnter your first Number: ");
 scanf("%d", &iValue2);
 // Call the  server function 
 iRet = Addition(iValue1, iValue2);
 printf("\nAddition of the niubers are:%d", iRet);
}
//////////////////////////////////////////////////////////////////////////////////////////////////////////
//  Result
//  Input : 5 
//  Input : 5

//  Output : 10
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////