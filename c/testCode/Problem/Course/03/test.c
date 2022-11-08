/*
 * @Author: qksuki qksuki@outlook.com
 * @Date: 2022-11-03 10:17:49
 * @LastEditors: qksuki qksuki@outlook.com
 * @LastEditTime: 2022-11-03 10:25:57
 * @FilePath: \codes\c\testCode\Problem\Course\03\test.c
 * @Description:
 *
 * Copyright (c) 2022 by qksuki qksuki@outlook.com, All Rights Reserved.
 */

#include <stdio.h>
void Hanota(int n, char a, char b, char c)
{
    if ((n == 1))
        printf("%d:%c->%c\n", n, a, c);
    else
    {
        Hanota(n - 1, a, c, b);
        printf("%d:%c->%c\n", n, a, c);
        Hanota(n - 1, b, a, c);
    }
}
int main()
{
    int n, a, b, c;
    scanf("%d %c %c %c", &n, &a, &b, &c);
    Hanota(n, a, b, c);
    return 0;
}
