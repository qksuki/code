/* 
 * @Author: qksuki qksuki@outlook.com
 * @Date: 2022/10/29 19:41
 * @Description: 
 * 
 * Copyright (c) 2022 by qksuki qksuki@outlook.com, All Rights Reserved. 
*/
#include <stdio.h>

int main() {
    int num = 0;
    int base;
    printf("输入 -1 结束进程\n");
    while (num != -1) {
        printf("请输入一个十进制整数\n");
        scanf("%d", &num);
        printf("请输入要转换的进制数\n");
        scanf("%d", &base);
        switch (base) {
            case 2: {
                printf("转换结果为: %#o", num);
                break;
            }
            case 8: {
                printf("转换结果为: %#o", num);
                break;
            }
            case 16: {
                printf("转换结果为: %#x", num);
                break;
            }
        }
    }
    return 0;
}