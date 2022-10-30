/* 
 * @Author: qksuki qksuki@outlook.com
 * @Date: 2022/10/29 23:49
 * @Description: 
 * 
 * Copyright (c) 2022 by qksuki qksuki@outlook.com, All Rights Reserved. 
*/
#include <stdio.h>

void getCount(int num, int *arr);

int main() {
    int count[10];
    //count 所有值赋0
    for (int i = 0; i < 10; ++i) {
        count[i] = 0;
    }

    int minNum, maxNum;
    scanf_s("%d %d", &minNum, &maxNum);

    //统计
    for (int i = minNum; i <= maxNum; ++i) {
        getCount(i, count);
    }

    //遍历输出 count 所有元素
    for (int i = 0; i < 10; ++i) {
        printf("%d  ", count[i]);
    }

    return 0;
}

//自增
void getCount(int num, int *arr) {
    int temp;
    while (num != 0) {
        temp = num % 10;
        for (int i = 0; i < 10; ++i) {
            if (i == temp) {
                ++arr[i];
            }
        }
        num /= 10;
    }
}
