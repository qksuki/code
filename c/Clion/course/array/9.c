/* 
 * @Author: qksuki qksuki@outlook.com
 * @Date: 2022/10/30 0:14
 * @Description: 
 * 
 * Copyright (c) 2022 by qksuki qksuki@outlook.com, All Rights Reserved. 
*/
#include <stdio.h>

int main() {
    char c = '0';
    int ans = 0;
    while ((c = getchar()) != '\n')
        ans += (c != ' ');
    printf("%d", ans);
    return 0;
}