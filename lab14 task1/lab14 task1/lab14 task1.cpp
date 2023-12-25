#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int arr[15];
    srand(time(NULL)); // ініціалізація генерації випадкових чисел використовуючи час 
    printf("array elements:\n");
    for (int i = 0; i < 15; i++) {
        arr[i] = rand() % 250+ 1; // заповнюємо масив рандомними числами від 250 до 1
        printf("%d ", arr[i]);
    }
    printf("\n");

    // знаходження максимального та мінімального значення через проходження по кожному елементу
    int* min = arr;
    int* max = arr;
    for (int i = 1; i < 15; i++) {
        if (arr[i] < *min) {
            min = &arr[i];
        }
        if (arr[i] > *max) {
            max = &arr[i];
        }
    }

    // Виводимо мінімальний та максимальний елементи та їхні позиції
    printf("minimal array element: %d, position: %ld\n", *min, min - arr + 1 );
    printf("maximal array element: %d, position: %ld\n", *max, max - arr + 1);

    // Виводимо відстань між числами використовуючи модуль 
    printf("distance between elements : %ld\n", labs(max - min));   

    return 0;
}