/*
 * @Author: qksuki qksuki@outlook.com
 * @Date: 2022-10-08 19:07:47
 * @LastEditors: qksuki qksuki@outlook.com
 * @LastEditTime: 2022-10-08 19:25:00
 * @FilePath: \codes\c\testCode\Problem\LuoGu\Level_01\B2064.c
 * @Description:
 * https://www.luogu.com.cn/problem/B2064
 * No.B2064
 * Copyright (c) 2022 by qksuki qksuki@outlook.com, All Rights Reserved.
 */

#include <stdio.h>
int getFibNum(int index);
int main() {
	// int line;
	// scanf("%d", &line);

	// int sout[line];

	// for (int i = 0; i < line; i++) {
	// 	scanf("%d", &sout[i]);
	// }

	int a;
	scanf("%d", &a);
	printf("%d", getFibNum(a));

	return 0;
}

int getFibNum(int index) {
	int anser = 1;
	if (index == 1 || index == 2) {
		anser = 1;
	} else {
		for (int i = 0; i < index - 2; i++) {
			anser += anser;
		}
	}
	return anser;
}