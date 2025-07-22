#ifndef MY_FUNCTIONS_H
#define MY_FUNCTIONS_H
/*************************************************************/
#include <iostream>
#include <cmath>
#include <iomanip>
#include <bitset>
#include <cctype>
#include <climits>
#include <chrono>

#include "typedefs.h"

void mySeparate(void);

void myPrintArray(uint32 *ArrPtr, uint32 ArrSize);

uint32 myDecToBin(uint32 num, uint8 bin[], bool print);

int32 myBinarySearchAlgorithm(uint32 Data[], uint32 Fisrt, uint32 Last, uint32 ReqData);

void myBubbleSort(uint32 *ArrPtr, uint32 ArrSize);

void myInsertionSort(uint32 *ArrPtr, uint32 ArrSize);

void mySelectionSort(uint32 *ArrPtr, uint32 ArrSize);

template <class Type>
void mySwap(Type *num1, Type *num2){
    Type temp = *num1;
    *num1 = *num2;
    *num2 = temp;
}

/*************************************************************/
#endif // MY_FUNCTIONS_H
