#include <stdio.h>
#include <windows.h>

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    int arr[] = { 1, 2, 3, 4, 5 };
    size_t size = sizeof(arr) / sizeof(arr[0]);

    printf("����� ������ � ������: %zu\n", sizeof(arr));
    printf("ʳ������ �������� ������: %zu\n", size);
    printf("������ ������� �������� ������: %p\n", (void*)&arr[0]);
    printf("������ ���������� �������� ������: %p\n", (void*)&arr[size - 1]);

    for (size_t i = 0; i < size / 2; ++i) {
        int temp = arr[i];
        arr[i] = arr[size - 1 - i];
        arr[size - 1 - i] = temp;
    }

    printf("����� ���� ������������� � ���������� �������: ");
    for (size_t i = 0; i < size; ++i) {
        printf("%d ", arr[i]);
    }

    return 0;
}