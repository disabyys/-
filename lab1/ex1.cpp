#include "func.h"

int main()
{
    srand(time(NULL));
    int size = 2 + rand() % 9, *array;
    cout << "Ammount of elements:" << size - 1 << endl;
    array = genRandArray(size, MAXVAL);
    print(array);
    delete[] array;
    return 0;
}
