#include "func.h"

int main()
{
    srand(time(NULL));
    int size = 2 + rand() % 9, **matrix = nullptr;
    cout << "Ammount of string:" << size << endl;
    matrix = genRandMatrix(size);
    printMatrix(matrix);
    for(int str = 0; str<size; str++)
    {
        delete[] *(matrix+str);
    }
    delete[] matrix;
    return 0;
}
