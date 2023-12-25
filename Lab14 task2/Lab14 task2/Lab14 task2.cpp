#include <stdio.h>

int main() {
    // створеюємо масив
    int arr[7];
    int* ptr = arr; 
    double sum = 0;
    //заповнюємо масив елементами які вводить користувач використовуючи вказівники
    printf("enter array element:\n");
    for (int i = 0; i < 7; i++) {
        scanf_s("%d", ptr + i); 
        sum += *(ptr + i);     
    }

    // виводимо середнє значення
    double average = sum / 7;
    printf("The average value of the array elements: %.2f\n", average);
}