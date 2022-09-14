/*
 * @Author: qksuki qksuki@outlook.com
 * @Date: 2022-09-14 19:17:06
 * @LastEditors: qksuki qksuki@outlook.com
 * @LastEditTime: 2022-09-14 19:19:19
 * @FilePath: \codes\c\c_primer\ans\chapter\chapter_2\2.13.7.c
 * @Description:
 * 许多研究表明，微笑益处多多。编写一个程序，生成以下格式的输出：
    Smile!Smile!Smile!
    Smile!Smile!
    Smile!
 * 该程序要定义一个函数，该函数被调用一次打印一次“Smile!”，根据程序的需要使用该函数。
 * Copyright (c) 2022 by qksuki qksuki@outlook.com, All Rights Reserved.
 */

#include <stdio.h>

void smile();

int main() {
	smile();
	smile();
	smile();
	printf("\n");
	smile();
	smile();
	printf("\n");
	smile();
	printf("\n");
	return 0;
}

void smile() { printf("Smile!"); }