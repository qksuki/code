/* 
 * @Author: qksuki qksuki@outlook.com
 * @Date: 2022/10/29 18:39
 * @Description: 
 * 
 * Copyright (c) 2022 by qksuki qksuki@outlook.com, All Rights Reserved. 
*/

#include <stdio.h>

#define arrayLength 5

void reverseArray(int *arr);

void printArray(int *arr);

int main() {
    int array[arrayLength] = {1, 2, 3, 4, 5};
    printArray(array);
    reverseArray(array);
    printArray(array);
    return 0;
}

void reverseArray(int *arr) {
    int temp;
    for (int i = 0; i < arrayLength / 2; ++i) {
        temp = arr[i];
        arr[i] = arr[arrayLength - (i + 1)];
        arr[arrayLength - (i + 1)] = temp;
    }

}

void printArray(int *arr) {
    for (int i = 0; i < arrayLength; ++i) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}