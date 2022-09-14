/*
 * @Author: qksuki qksuki@outlook.com
 * @Date: 2022-09-14 18:25:32
 * @LastEditors: qksuki qksuki@outlook.com
 * @LastEditTime: 2022-09-14 18:26:59
 * @FilePath: \codes\c\c_primer\ans\chapter\chapter_2\2.12.3.c
 * @Description:
 * 编写一个程序把你的年龄转换成天数，并显示这两个值。这里不用考虑闰年的问题。
 * Copyright (c) 2022 by qksuki qksuki@outlook.com, All Rights Reserved.
 */

#include <stdio.h>

int main() {
	int age = 0;

	printf("input your age:\n");
	scanf("%d", &age);
	printf("%d->%d", age, age * 365);
	return 0;
}