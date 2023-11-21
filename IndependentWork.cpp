#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

void printArray(int* arr, size_t size) {
    for (size_t i = 0; i < size; ++i) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    const size_t arraySize = 10;
    int mas[arraySize];

    for (size_t i = 0; i < arraySize; ++i) {
        mas[i] = rand() % 10;
    }

    printf("Початковий масив: ");
    printArray(mas, arraySize);

    for (size_t i = 0; i < arraySize - 1; i += 2) {
        int temp = mas[i];
        mas[i] = mas[i + 1];
        mas[i + 1] = temp;
    }

    printf("Масив після заміни місцями елементів: ");
    printArray(mas, arraySize);

    return 0;
}