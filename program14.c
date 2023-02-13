// 2. Write a program which accept Array elements and then display its and Avarage of that numbers 
// Input:1 3 4 2 5
// Output: 3
//////////////////////////////////////////////////////////////////////////////////////////

//     ----------------- Algorithm ----------------- 

/*
    1.START
    2.Accept number from user  as no
    3.then Display the numbers
    4.then Add the all numbers
    5.divide the summatins of numbers by the counts of that numbers 
    5.Displayavarage  of that numbers
    4.END
*/
//     ---------------    ----------------- 
#include<stdio.h>
#include<stdlib.h>

float Avarage(int Data[], int iSize)
{
    int iCnt = 0, iSum = 0;
    float fAvg = 0.0;
    //      1           2           3
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        iSum = iSum + Data[iCnt];   // 4
    }
    fAvg = iSum / iSize;
    return fAvg;
}
//////////////////////////////////////
// Entry point of the application ///
//////////////////////////////////////
int main()
{
    int Arr[5];
    int iCnt = 0, iLength=5;
    float fRet = 0.0;

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
    fRet = Avarage(Arr,iLength);
    printf("The Avarage of that array element is %f",fRet);
    return 0;
}
///////////////////////////////////////////
//  Result                         ///////
// Input:4  5 4 1 1               ///////
// Output: 3                    ///////
///////////////////////////////////////