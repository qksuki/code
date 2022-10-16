/*
 * @Author: qksuki qksuki@outlook.com
 * @Date: 2022-10-14 20:43:50
 * @LastEditors: qksuki qksuki@outlook.com
 * @LastEditTime: 2022-10-14 20:54:19
 * @FilePath: \codes\c\testCode\Problem\Course\01\3.c
 * @Description:
 *
 * Copyright (c) 2022 by qksuki qksuki@outlook.com, All Rights Reserved.
 */
#include <stdio.h>
int getFactorial(int num);
int main() {
	int n;
	double sum = 0;
	scanf("%d", &n);
	for (int i = 1; i <= n; i++) {
		sum += 1.0 * 1 / getFactorial(i);
	}
	printf("sum = %g", sum);
	return 0;
}

int getFactorial(int num) {
	int factorial = 1;
	for (int i = num; i >= 1; i--) {
		factorial *= i;
	}
	return factorial;
}