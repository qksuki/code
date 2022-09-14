/*
 * @Author: qksuki qksuki@outlook.com
 * @Date: 2022-09-14 18:52:55
 * @LastEditors: qksuki qksuki@outlook.com
 * @LastEditTime: 2022-09-14 19:06:23
 * @FilePath: \codes\c\c_primer\ans\chapter\chapter_2\2.13.5.c
 * @Description:
 * 编写一个程序，生成以下输出：
 * Brazil,　Russia,　India,　China
 * India,　China,
 * Brazil,　Russia
 * 除了main()以外，该程序还要调用两个自定义函数：一个名为br()，调
 * 用一次打印一次“Brazil, Russia”；另一个名为ic()，调用一次打印一次“India,
 * China”。其他内容在main()函数中完成。
 * Copyright (c) 2022 by qksuki qksuki@outlook.com, All Rights Reserved.
 */

#include <stdio.h>

void br();
void ic();

int main() {
	br();
	printf("\n");
	ic();
	return 0;
}

void br() { printf("Brazil, Russia"); }

void ic() { printf("India, China"); }