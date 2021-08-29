#include "insertion_sort.h"
#include "global.h"
//https://en.wikipedia.org/wiki/Insertion_sort

INSERTION_SORT::INSERTION_SORT()
{
    FillRandomArray(Array, Size);
}

void INSERTION_SORT::InsertionSort()
{
    for(int i = 1; i < Size; i++)
    {
        int current = Array[i];
        int j = i - 1;
        while (j >= 0 && Array[j] > current)
        {
            Array[j+1] = Array[j];
            j = j - 1;
        }
        Array[j+1] = current;
    }
    ConsoleOutArray(Array, Size);
}


