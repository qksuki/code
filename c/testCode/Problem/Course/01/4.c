/*
 * @Author: qksuki qksuki@outlook.com
 * @Date: 2022-10-14 20:55:26
 * @LastEditors: qksuki qksuki@outlook.com
 * @LastEditTime: 2022-10-14 21:10:18
 * @FilePath: \codes\c\testCode\Problem\4.c
 * @Description:
 *
 * Copyright (c) 2022 by qksuki qksuki@outlook.com, All Rights Reserved.
 */
#include <math.h>
#include <stdio.h>
int main() {
	int sum = 0;
	for (int i = 100; i <= 999; i++) {
		sum = pow(i / 100, 3) + pow((i - ((i / 100) * 100)) / 10, 3) +
		      pow(i % 10, 3);
		if (sum == i)
			printf("%d\n", i);
	}

	return 0;
}