#include "bubble_sort.h"
#include "global.h"

BUBBLE_SORT::BUBBLE_SORT()
{
    FillRandomArray(Array, Size);
}

void BUBBLE_SORT::BubbleSort()
{
    for(int i = 0; i < Size; i++){
        for(int j = i; j < Size; j++){
            if(Array[i] > Array[j]){
                Swap(Array[i], Array[j]);
            }
        }
    }
    ConsoleOutArray(&Array[0], Size);
}
