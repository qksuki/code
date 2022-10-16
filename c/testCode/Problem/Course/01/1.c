/*
 * @Author: qksuki qksuki@outlook.com
 * @Date: 2022-10-14 19:41:06
 * @LastEditors: qksuki qksuki@outlook.com
 * @LastEditTime: 2022-10-14 19:54:26
 * @FilePath: \codes\c\testCode\Problem\Course\01\1.c
 * @Description:
 *
 * Copyright (c) 2022 by qksuki qksuki@outlook.com, All Rights Reserved.
 */
#include <stdbool.h>
#include <stdio.h>

int main() {
	double num;
	double max = 0;
	while (true) {
		printf("Press a number: ");
		scanf("%lf", &num);
		//结束循环条件
		if (num <= 0)
			break;

		if (num > max) {
			max = num;
		}
	}
	printf("The largest number is %g", max);
	return 0;
}
