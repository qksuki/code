/* 
 * @Author: qksuki qksuki@outlook.com
 * @Date: 2022/10/29 17:45
 * @Description: 
 * 
 * Copyright (c) 2022 by qksuki qksuki@outlook.com, All Rights Reserved. 
*/
#include <stdio.h>

void find_number(int *p ,int number);

int main() {
    int arr[10] = {1,1,2,2,3,3,4,4,5,5};
    find_number(arr,3);
    return 0;
}

void find_number(int *p ,int number){
    int numCount = 0;
    int lastNumPosition = 0;
    for (int i = 0; i < 10; ++i) {
        if (p[i] == number){
            numCount++;
        }
    }
    for (int i = 9; i >=0 ; --i) {
        if (p[i] == number){
            lastNumPosition = i;
            break;
        }
    }

    printf("%d 在 array 中出现了 %d 次, 最后一次出现在 array[%d]\n", number, numCount, lastNumPosition);
}

