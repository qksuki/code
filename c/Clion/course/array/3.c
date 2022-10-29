/* 
 * @Author: qksuki qksuki@outlook.com
 * @Date: 2022/10/29 18:55
 * @Description: 
 * 
 * Copyright (c) 2022 by qksuki qksuki@outlook.com, All Rights Reserved. 
*/
#include <stdio.h>

#define arrayLength 6

void findNumber(int *arr, int n);

int main() {
    int array[arrayLength];
    int number;

    for (int i = 0; i < arrayLength; ++i) {
        scanf("%d", &number);
        array[i] = number;
    }

    int n;
    scanf("%d", &n);

    findNumber(array, n);

    return 0;
}

void findNumber(int *arr, int n) {
    int isFound = 0;
    for (int i = 0; i < arrayLength; ++i) {
        if (n == arr[i]){
            printf("%d 出现在 arr[%d]\n",n, i);
            isFound = 1;
            break;
        }
    }

    if (isFound == 0){
        printf("no found!\n");
    }
}
