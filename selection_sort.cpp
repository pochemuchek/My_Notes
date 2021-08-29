#include "selection_sort.h"
#include "global.h"

SELECTION_SORT::SELECTION_SORT()
{
    FillRandomArray(Array, Size);
}

void SELECTION_SORT::SelectionSort()
{
    for(int i = 0; i < Size - 1; i++)
    {
        int IndxMin = i;
        for(int j = i+1;j < Size; j++)
        {
            if(Array[IndxMin] < Array[j])
            {
                IndxMin = j;
            }
        }
        if(IndxMin != i)
        {
            Swap(Array[IndxMin], Array[i]);
        }
    }
   ConsoleOutArray(Array, Size);
   //std::cout << "Selection_Sort" << std::endl;
}
