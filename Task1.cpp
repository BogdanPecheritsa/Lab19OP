#include <stdio.h>
#include <windows.h>

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    int x, y;
    int m[5] = { 1, 2, 3, 4, 5 };

    int* p;

    p = &y;

    printf("Значення змінної y через покажчик: %d\n", *p);

    *p = 7;

    printf("Адреса пам'яті, на яку вказує р: %p\n", (void*)p);

    *p += 5;

    printf("Нове значення змінної y: %d\n", y);

    return 0;
}