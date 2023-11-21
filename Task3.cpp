#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <ctime>

void printArray(int* arr, size_t size) {
    for (size_t i = 0; i < size; ++i) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    srand(static_cast<unsigned>(time(nullptr)));

    const size_t arraySize = 10;
    int mas[arraySize];

    for (size_t i = 0; i < arraySize; ++i) {
        mas[i] = rand() % 10;
    }

    size_t newSize = arraySize;

    for (size_t i = 0; i < newSize; ++i) {
        if (mas[i] == 0) {
            for (size_t j = i; j < newSize - 1; ++j) {
                mas[j] = mas[j + 1];
            }
            mas[newSize - 1] = 0;
            --i;
            --newSize;
        }
    }

    for (size_t i = 0; i < newSize; ++i) {
        if (mas[i] % 2 == 0) {
            for (size_t j = newSize; j > i; --j) {
                mas[j] = mas[j - 1];
            }
            mas[i + 1] = mas[i] + 2;
            ++newSize;
            break;
        }
    }

    printf("Масив після видалення 0 та додавання нового елемента: ");
    printArray(mas, newSize);

    return 0;
}