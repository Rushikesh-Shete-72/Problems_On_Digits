// Program to give input two numbers and display its multiplications 

//     ----------------- Algorithm ----------------- 


/*
    START
        Accept number from user as NO

        Multiply  that two numbers
            Then display it's Multiplications
    END
*/

///////////////////////////////////////////////////////////////////////////////
#include<stdio.h>
//////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name :     Multiplication
//  Description :       To Multiply the two numbers
//  Input :             Integer
//  Output :            Integer
//  Author :            Shete Rushikesh Gopinath (MI10011)
//  Date :              2/11/2023
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////

//Body Server function Multiplication
int Multiplication(int iNo1,int iNo2) 
{

 int iAns = 0;
 return iAns = iNo1 * iNo2;

}
//  Entry point of the application
int main()
{

 int iValue1 = 0, iValue2 = 0, iRet = 0; // Declare the variable
 // Take input  from user
 printf("\nCalculate the multiplications:\n");
 printf("\nEnter your First no: ");
 scanf("%d", &iValue1);
  printf("\nEnter your second no: ");
 scanf("%d", &iValue2);
 // Call the Server functions
 iRet = Multiplication(iValue1, iValue2);

 printf("\nThe Multiplication of the two numbers are;%d", iRet); // Output of the multiplications of the two numbers
 return 0;
}
//////////////////////////////////////////////////////////////////////////////////////////////////////////
//  Result
//  Input : 5 
//  Input : 5

//  Output : 25
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////