/* 
 * @Author: qksuki qksuki@outlook.com
 * @Date: 2022/10/29 19:26
 * @Description: 
 * 
 * Copyright (c) 2022 by qksuki qksuki@outlook.com, All Rights Reserved. 
*/

#include <stdio.h>

#define arrayLength 10

int main() {
    int array[arrayLength] = {1, 1, 2, 3, 26, 3, 4, 5, 8, 7, 7, 4};

    int isRepeat = 0;

    for (int i = 0; i < arrayLength; ++i) {
        for (int j = 0; j < i; ++j) {
            if (array[i] == array[j]) {
                isRepeat = 1;
                break;
            } else
                isRepeat = 0;
        }
        if (isRepeat == 0)
            printf("%d\t", array[i]);

    }
    return 0;
}