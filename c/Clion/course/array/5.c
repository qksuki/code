/*
 * @Author: qksuki qksuki@outlook.com
 * @Date: 2022/10/29 19:41
 * @Description:
 *
 * Copyright (c) 2022 by qksuki qksuki@outlook.com, All Rights Reserved.
 */
#include <stdio.h>

void binary(int n) {
    if (n)
        binary(n / 2);
    else
        return;
    printf("%d", n % 2);
}

int main() {
    setbuf(stdout, NULL);
    int num = 0;
    int base;
    printf("输入 -1 结束进程\n");
    while (num != -1) {
        printf("请输入一个十进制整数\n");
        scanf("%d", &num);
        printf("请输入要转换的进制数\n");
        scanf("%d", &base);
        switch (base) {
            case 2:
                binary(num);
                printf("\n");
                break;
            case 8:
                printf("转换结果为: %#o\n", num);
                break;
            case 16:
                printf("转换结果为: %#x\n", num);
                break;
        }
    }
    return 0;
}