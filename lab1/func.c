#include "func.h"

int *genRandArray(int size)
{
    int *arr = new int[size];
    if (arr == nullptr)
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

int** genRandMatrix(int size)
{
    int** matrix = new int*[size];
    if (matrix == nullptr)
    {
        cerr << "memory allocation error!" << endl;
        delete[] matrix;
        exit(EXIT_FAILURE);
    }
    *matrix = genRandArray(size);
    for(int nb_arr = 1; nb_arr<size; nb_arr++)
    {
        *(matrix+nb_arr) = genRandArray(2 + rand()%8);
    }
    return matrix;
}

void printMatrix(int** matrix)
{
    for(int str=0; str<**matrix; str++)
    {
        printf("%-2d: ", **(matrix+str));
        for(int el=1; el<**(matrix+str); el++)
        {
            printf("|%-3d|", *(*(matrix+str)+el));
        }
        cout << endl;
    }
}

