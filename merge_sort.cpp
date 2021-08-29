#include "merge_sort.h"
#include "global.h"

MERGE_SORT::MERGE_SORT()
{
    FillRandomArray(Array, Size);
    ConsoleOutArray(Array, Size);
}

void MERGE_SORT::MergeSort(int *Array, int Size)
{
    if(Size <= 1){
        return;
    }

    MergeSort(&Array[0], Size/2);
    MergeSort(&Array[Size/2], Size/2 + Size%2);

    MergeArray(&Array[0], Size/2, &Array[Size/2], Size/2 + Size%2);
}

void MERGE_SORT::MergeArray(int *FirstArray, int SizeFirst, int *SecondArray, int SizeSecond)
{
    int IndxArr1 = 0;
    int IndxArr2 = 0;
    int IndxNewArr = 0;
    int *NewArray = new int[SizeFirst + SizeSecond];

    while (IndxArr1 <= SizeFirst && IndxArr2 <= SizeSecond){
        while(FirstArray[IndxArr1] <= SecondArray[IndxArr2]){
           NewArray[IndxNewArr++] = FirstArray[IndxArr1++];

           if(IndxArr1 >= SizeFirst){
               break;
           }
        }
        NewArray[IndxNewArr++] = SecondArray[IndxArr2++];
    }
//====
    for (; IndxArr2 < SizeSecond; IndxNewArr++, IndxArr2++) {
        NewArray[IndxNewArr] = SecondArray[IndxArr2];
    }
    for (; IndxArr1 < SizeFirst; IndxNewArr++, IndxArr1++) {
        NewArray[IndxNewArr] = FirstArray[IndxArr1];
    }
//====
    CopyArray(FirstArray, SizeFirst, &NewArray[0]);
    CopyArray(SecondArray, SizeSecond, &NewArray[SizeFirst]);

    delete [] NewArray;
}
