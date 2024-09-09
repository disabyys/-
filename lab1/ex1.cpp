using namespace std;

#include <iostream>
#include <cstdlib>
#include <ctime>

#define MAXVAL 100

int *genRandArray(int size, int maxValue);
void print(int *arr);

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
