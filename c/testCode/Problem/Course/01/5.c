/*
 * @Author: qksuki qksuki@outlook.com
 * @Date: 2022-10-14 21:13:34
 * @LastEditors: qksuki qksuki@outlook.com
 * @LastEditTime: 2022-10-14 21:20:39
 * @FilePath: \codes\c\testCode\Problem\5.c
 * @Description:
 *
 * Copyright (c) 2022 by qksuki qksuki@outlook.com, All Rights Reserved.
 */
#include <stdio.h>
#include <stdlib.h>

int main() {
	char c;
	int letters = 0, space = 0, digit = 0, others = 0;

	while ((c = getchar()) != '\n') {
		if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
			letters++;

		else if (c == ' ')
			space++;

		else if (c >= '0' && c <= '9')
			digit++;

		else
			others++;
	}

	printf("The number of alaph is %d\nThe number of space is %d\nThe number "
	       "of digit is %d\nThe number of others is %d\n",
	       letters, space, digit, others);

	return 0;
}
