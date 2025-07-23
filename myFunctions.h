#ifndef MY_FUNCTIONS_H
#define MY_FUNCTIONS_H
/*************************************************************/
#include <iostream>
#include <cmath>
#include <ctime>
#include <iomanip>
#include <bitset>
#include <cctype>
#include <climits>
#include <chrono>
#include <assert.h>
#include <cstdlib>

#include "typedefs.h"

void mySeparate(void);

void myRandomIntegarArrayGenerator(int32* array, uint32 length, int32 min, int32 max);

template <class Type>
void mySwap(Type *num1, Type *num2){
    Type temp = *num1;
    *num1 = *num2;
    *num2 = temp;
}



void myPrintArray(uint32 *ArrPtr, uint32 ArrSize);

uint32 myDecToBin(uint32 num, uint8 bin[], bool print);

int32 myBinarySearchAlgorithm(uint32 Data[], uint32 Fisrt, uint32 Last, uint32 ReqData);

void myBubbleSort(uint32 *ArrPtr, uint32 ArrSize);

void myInsertionSort(uint32 *ArrPtr, uint32 ArrSize);

void mySelectionSort(uint32 *ArrPtr, uint32 ArrSize);



/*************************************************************/
#endif // MY_FUNCTIONS_H
