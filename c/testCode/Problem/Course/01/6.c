/*
 * @Author: qksuki qksuki@outlook.com
 * @Date: 2022-10-14 21:21:30
 * @LastEditors: qksuki qksuki@outlook.com
 * @LastEditTime: 2022-10-14 21:35:25
 * @FilePath: \codes\c\testCode\Problem\Course\01\6.c
 * @Description:
 *
 * Copyright (c) 2022 by qksuki qksuki@outlook.com, All Rights Reserved.
 */
#include <math.h>
#include <stdio.h>
int getNums(int num, int n);
int main() {
	int a, n;
	int sum = 0;
	scanf("%d %d", &a, &n);
	for (int i = 1; i <= n; i++) {
		sum += getNums(a, i);
	}
	printf("sum = %d", sum);
	return 0;
}
int getNums(int num, int n) {
	int ans = 0;
	for (int i = 0; i < n; i++) {
		ans += num * pow(10, i);
	}
	return ans;
}