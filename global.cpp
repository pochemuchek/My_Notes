#include <random>
#include <iostream>
#include "global.h"

void FillRandomArray(int *Array, int SizeArray)
{
   for(int i = 0; i < SizeArray; i++){
       Array[i] = (rand() % 100);
   }
}

void Swap(int &First, int &Second)
{
    int Third;

    Third = First;
    First = Second;
    Second = Third;
}

void ConsoleOutArray(int *Array, int Size)
{
    for(int i = 0; i < Size; i++){
        std::cout << Array[i] << " ";
    }
    std::cout << std::endl;
}

void CopyArray(int *Array, int Size, int *CoArray)
{
    for(int i = 0; i < Size; i++){
        Array[i] = CoArray[i];
    }
}
