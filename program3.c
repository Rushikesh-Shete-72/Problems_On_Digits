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

// program to multiply the two numbers
#include<stdio.h>
//  Entry point of the application
int main()
{
 int iNo1 = 04,iNo2=04;
 int iMult = 0;
 // Take input from users 
 printf("Enter first number:\n ");
 scanf("%d",&iNo1);
 printf("Enter second number: \n");
 scanf("%d", &iNo2);
 // Display the numbers accept from users 
 printf("First no is :%d\n", iNo1);
 printf("second no is :%d\n", iNo2);
 // The main Logic to multiply the two numbers  
  iMult=iNo1*iNo2;
  // Display the output of multiplication
  printf("Multiplication is :%d\n", iMult);
  return 0;

}
//////////////////////////////////////////////////////////////////////////////////////////////////////////
//  Result
//  Input : 4
//  Input : 4

//  Output : 16
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////