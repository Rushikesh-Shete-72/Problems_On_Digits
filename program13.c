// 2. Write a program which accept Array elements and then display its and Display its Additions
// Input:4
// Output: 1 2 4 7
//////////////////////////////////////////////////////////////////////////////////////////

//     ----------------- Algorithm ----------------- 

/*
    1.START
    2.Accept number from user  as no
    3.then Display the numbers
    4.then Add the all numbers
    5.Display additions of that numbers
    4.END
*/
//     ---------------    ----------------- 
#include<stdio.h>
#include<stdlib.h>

int Summation(int Data[], int iSize)
{
    int iCnt = 0, iSum = 0,iTemp=0;
    //      1           2           3
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
     iTemp = Data[iCnt];
     iSum = iSum + iTemp; // 4
    }
    return iSum;
}
//////////////////////////////////////
// Entry point of the application ///
//////////////////////////////////////
int main()
{
    int Arr[5];
    int iCnt = 0, iRet = 0,iLength=5;

    printf("Enter the elemets : \n");

    for(iCnt = 0; iCnt < 5; iCnt++)
    {
        scanf("%d",&Arr[iCnt]);
    }
        printf("Elements from array are : \n");

    for(iCnt = 0; iCnt < 5; iCnt++)
    {
        printf("%d\n",Arr[iCnt]);
    }


    
    iRet = Summation(Arr,iLength);

    return 0;
}
///////////////////////////////////////////
//  Result                         ///////
// Input:4  3 4                   ///////
// Output: 11                    ///////
///////////////////////////////////////