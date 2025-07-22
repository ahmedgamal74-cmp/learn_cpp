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

void mySwap(uint32 *num1, uint32 *num2);

uint32 myDecToBin(uint32 num, uint8 bin[], bool print);

int32 myBinarySearchAlgorithm(uint32 Data[], uint32 Fisrt, uint32 Last, uint32 ReqData);

void myBubbleSort(uint32 *ArrPtr, uint32 ArrSize);

void myInsertionSort(uint32 *ArrPtr, uint32 ArrSize);

void mySelectionSort(uint32 *ArrPtr, uint32 ArrSize);




/*************************************************************/
#endif // MY_FUNCTIONS_H
