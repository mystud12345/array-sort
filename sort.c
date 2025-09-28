#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int n;
    scanf("%d", &n);  // Просто вводим число без текста

    int* arr = (int*)malloc(n * sizeof(int));
    srand((unsigned int)time(NULL));

    for (int i = 0; i < n; i++) {
        arr[i] = rand() % 100;
        printf("%d ", arr[i]);  // Выводим исходный массив
    }
    printf("\n");

    // Сортировка
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);  // Выводим отсортированный массив
    }
    printf("\n");

    free(arr);
    system("pause");
    return 0;
}
