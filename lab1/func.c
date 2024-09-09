#include "func.h"

int *genRandArray(int size, int maxValue)
{
    int *arr = new int[size];
    if (arr == NULL)
    {
        cerr << "memory allocation error!" << endl;
        delete[] arr;
        exit(EXIT_FAILURE);
    }
    *arr = size;
    for (int nb_el = 1; nb_el < size; nb_el++)
    {
        *(arr + nb_el) = rand() % MAXVAL;
    }
    return arr;
}

void print(int *arr)
{
    for (int nb_el = 1; nb_el < *arr; nb_el++)
    {
        printf("|%-3d|", *(arr + nb_el));
    }
    cout << endl;
}


