/*
 * @Author: qksuki qksuki@outlook.com
 * @Date: 2022-10-28 00:05:36
 * @LastEditors: qksuki qksuki@outlook.com
 * @LastEditTime: 2022-10-28 15:37:57
 * @FilePath: \codes\c\testCode\Problem\Course\02\3.c
 * @Description:
 *
 * Copyright (c) 2022 by qksuki qksuki@outlook.com, All Rights Reserved.
 */
#include <math.h>
#include <stdio.h>

int isPrimePlus(int num);

int main() {
	int n;
	while (1) {
		scanf("%d", &n);
		isPrimePlus(n);
	}

	return 0;
}

int isPrimePlus(int num) {

	if (num < 2) {
		printf("error");
		return 0;
	}

	for (int i = 2; i < sqrt(num); i++) {
		if (num % i == 0) {
			break;
		} else {
			printf("again\n");
			return 0;
		}
	}

	printf("%d = ", num);

	for (int i = 2; i < num;) {
		if (num % i == 0) {
			printf("%d * ", i);
			num = num / i;
			i = 2;
		} else {
			i++;
		}
	}

	printf("%d\n", num);

	return 1;
}
