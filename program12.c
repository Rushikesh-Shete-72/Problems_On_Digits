// 2. Write a program which accept Array elements and then display its
// Input:4
// Output: 1 2 4 7
//////////////////////////////////////////////////////////////////////////////////////////

//     ----------------- Algorithm ----------------- 

/*
    1.START
    2.Accept number from user  as no
    3.then Display the numbers
    4.END
*/
//     ---------------    ----------------- 

#include<stdio.h>
#include<stdlib.h>
//////////////////////////////////////
// Entry point of the application ///
//////////////////////////////////////
int main()
{
 int Arr[5];
 int iCnt = 0;

 printf("Enter the elemets : \n");

 for (iCnt = 0; iCnt < 5; iCnt++)
 {
  scanf("%d", &Arr[iCnt]);
    }

    printf("Elements from array are : \n");

    for(iCnt = 0; iCnt < 5; iCnt++)
    {
        printf("%d\n",Arr[iCnt]);
    }

    return 0;
}
///////////////////////////////////////////
//  Result                         ///////
// Input:4                        ///////
// Output: 1 2 4 7               ///////
///////////////////////////////////////