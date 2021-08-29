#ifndef MERGE_SORT_H
#define MERGE_SORT_H


class MERGE_SORT
{
private:


public:
    MERGE_SORT();

    void MergeSort(int *Array, int Size);
    void MergeArray(int *FirstArray,int SizeFirst, int *SecondArray, int SizeSecond);

    int Size = 10;
    int Array[10];
};

#endif // MERGE_SORT_H
