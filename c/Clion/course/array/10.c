/* 
 * @Author: qksuki qksuki@outlook.com
 * @Date: 2022/10/30 0:25
 * @Description: 
 * 
 * Copyright (c) 2022 by qksuki qksuki@outlook.com, All Rights Reserved. 
*/
#include <stdio.h>

int main(){
    setbuf(stdout, NULL);
    char sentence[20];
    //初始化
    for (int i = 0; i < 20; ++i) {
        sentence[i] = '0';
    }

    char c = '0';
    //读取
    for (int i = 0; i < 20; ++i) {
        c = getchar();
        if (c=='\n')
            break;
        sentence[i] = c;
    }

    int atNum = 0;
    for (int i = 19; i >=0 ; --i) {
        if ('!' == sentence[i]){
            atNum = i;
        }
    }

    //检测回文
    int isRAN = 1;
    for (int i = 0; i < atNum/2; ++i) {
        if (sentence[i] != sentence[atNum-(i+1)]){
            printf("No\n");
            isRAN = 0;
            break;
        }
    }
    if (isRAN == 1)
        printf("YES\n");
    return 0;
}