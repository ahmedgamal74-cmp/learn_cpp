#include "myFunctions.h"

void mySeparate(void){
    std::cout<<"--------------------------------------------------------------------------------------------------------------"
    <<std::endl;
}

void myRandomIntegarArrayGenerator(int32* array, uint32 length, int32 min, int32 max)
{
    for(uint32 i=0; i<length; i++){
        array[i] = min + rand() % (max-min+1);
    }
}

void myPrintArray(uint32 *ArrPtr, uint32 ArrSize){

}

uint32 myDecToBin(uint32 num, uint8 bin[], bool print){ 
    /* returns no of digits and writes the binary in opposite direction in the array */
    return 0;
}

int32 myBinarySearchAlgorithm(uint32 Data[], uint32 First, uint32 Last, uint32 ReqData){
    return 0;
}

void myBubbleSort(uint32 *ArrPtr, uint32 ArrSize){

}

void myInsertionSort(uint32 *ArrPtr, uint32 ArrSize){

}

void mySelectionSort(uint32 *ArrPtr, uint32 ArrSize){

}


