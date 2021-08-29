#include <QCoreApplication>
#include "bubble_sort.h"
#include "selection_sort.h"
#include "insertion_sort.h"
#include "merge_sort.h"
#include "global.cpp"

int main()
{
    MERGE_SORT *Sort = new MERGE_SORT();
    Sort->MergeSort(Sort->Array, Sort->Size);
    ConsoleOutArray(Sort->Array, Sort->Size);
    return 0;
}
