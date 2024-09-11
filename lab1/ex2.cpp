#include "func.h"

int main()
{
    srand(time(NULL));
    int size = 2 + rand() % 9, **matrix = nullptr;
    cout << "Ammount of string:" << size << endl;
    matrix = genRandMatrix(size);
    // for (int i = 0; i < size; i++)
    // {
    //     for (int j = 0; j < **(matrix + i); j++)
    //     {
    //         printf("%-3d", matrix[i][j]);
    //     }
    //     cout << endl;
    // }
    printMatrix(matrix);
    return 0;
}
