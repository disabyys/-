#ifndef FUNC_H
#define FUNC_H

using namespace std;

#include <iostream>
#include <cstdlib>
#include <ctime>

#define MAXVAL 100

int *genRandArray(int size);
void print(int *arr);
int ** genRandMatrix(int size);
void printMatrix(int** matrix);

#endif
