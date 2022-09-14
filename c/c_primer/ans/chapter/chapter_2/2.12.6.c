/*
 * @Author: qksuki qksuki@outlook.com
 * @Date: 2022-09-14 19:07:00
 * @LastEditors: qksuki qksuki@outlook.com
 * @LastEditTime: 2022-09-14 19:08:43
 * @FilePath: \codes\c\c_primer\ans\chapter\chapter_2\2.13.6.c
 * @Description:
 * 编写一个程序，创建一个整型变量toes，并将toes设置为10。程序中还
 * 要计算toes的两倍和toes的平方。该程序应打印3个值，并分别描述以示区分。
 * Copyright (c) 2022 by qksuki qksuki@outlook.com, All Rights Reserved.
 */

#include <stdio.h>

int main() {
	int toes = 10;
	printf("toes = %d, toes ^ 2 = %d, toes ^ 3 = %d\n", toes, toes * toes,
	       toes * toes * toes);
	return 0;
}