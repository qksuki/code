/*
 * @Author: qksuki qksuki@outlook.com
 * @Date: 2022-10-28 15:40:47
 * @LastEditors: qksuki qksuki@outlook.com
 * @LastEditTime: 2022-10-28 16:09:53
 * @FilePath: \codes\c\testCode\Problem\Course\02\4.c
 * @Description:
 *
 * Copyright (c) 2022 by qksuki qksuki@outlook.com, All Rights Reserved.
 */
#include <math.h>
#include <stdio.h>

int isPrime(int num);
int isPalindromeNumber(int num);

int main() {
	int minNum, maxNum;
	int lineCount = 0;
	scanf("%d %d", &minNum, &maxNum);
	for (int i = minNum; i <= maxNum; i++) {
		if (isPrime(i) && isPalindromeNumber(i)) {
			printf("%d\t", i);
			if (++lineCount == 10) {
				lineCount = 0;
				printf("\n");
			}
		}
	}

	return 0;
}

int isPrime(int num) {
	if (num < 2) {
		return 0;
	}

	for (int i = 2; i <= sqrt(num); i++) {
		if (num % i == 0) {
			return 0;
		}
	}

	return 1;
}

int isPalindromeNumber(int num) {
	//获取数字位数
	int numLength = 0;
	int temp = num;

	while (temp != 0) {
		temp /= 10;
		numLength++;
	}

	int number[numLength];
	for (int i = 0; i < numLength; i++) {
		number[numLength - (i + 1)] = num % 10;
		num /= 10;
	}

	for (int i = 0; i < numLength / 2; i++) {
		if (number[i] != number[numLength - (i + 1)]) {
			return 0;
		}
	}

	return 1;
}