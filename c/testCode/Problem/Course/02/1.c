/*
 * @Author: qksuki qksuki@outlook.com
 * @Date: 2022-10-27 23:42:50
 * @LastEditors: qksuki qksuki@outlook.com
 * @LastEditTime: 2022-10-27 23:48:53
 * @FilePath: \codes\c\testCode\Problem\Course\02\1.c
 * @Description:
 *
 * Copyright (c) 2022 by qksuki qksuki@outlook.com, All Rights Reserved.
 */
#include <math.h>
#include <stdio.h>

int IsPrime(int n);

int main() {
	int num;
	while (1) {
		scanf("%d", &num);
		IsPrime(num);
	}

	return 0;
}

int IsPrime(int n) {
	if (n <= 1) {
		printf("No\n");
		return 0;
	}

	for (int i = 2; i <= sqrt(n); i++) {
		if (n % i == 0) {
			printf("No\n");
			return 0;
		}
	}

	printf("Yes\n");
	return 1;
}