/*
 * @Author: qksuki qksuki@outlook.com
 * @Date: 2022-10-14 19:55:55
 * @LastEditors: qksuki qksuki@outlook.com
 * @LastEditTime: 2022-10-14 20:42:34
 * @FilePath: \codes\c\testCode\Problem\Course\01\2.c
 * @Description:
 *
 * Copyright (c) 2022 by qksuki qksuki@outlook.com, All Rights Reserved.
 */
#include <stdio.h>

int GCD(int a, int b);
int main() {
	int m, n;
	int gcd;

	scanf("%d %d", &m, &n);
	gcd = GCD(m, n);
	printf("%d", gcd);
	return 0;
}

int GCD(int a, int b) {
	if (b == 0)
		return a;
	else
		return GCD(b, a % b);
}