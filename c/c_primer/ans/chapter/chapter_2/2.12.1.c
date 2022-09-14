/*
 * @Author: qksuki qksuki@outlook.com
 * @Date: 2022-09-12 23:10:23
 * @LastEditors: qksuki qksuki@outlook.com
 * @LastEditTime: 2022-09-14 18:12:53
 * @FilePath: \codes\c\c_primer\ans\chapter\chapter_2\2.12.1.c
 * @Description:
 * 编写一个程序，调用一次 printf()函数，把你的姓名打印在一行。再调用一次
 * printf()函数*
 * 你的姓名分别打印在两行。然后，再调用两次printf()函数，把你的姓名打印在一行。输出应如*
 * 下所示（当然要把示例的内容换成你的姓名） Copyright (c) 2022 by qksuki
 * qksuki@outlook.com, All Rights Reserved.
 */

#include <stdio.h>

int main() {
	printf("Gustav Mahler\n");
	printf("Gustav\n");
	printf("Mahler\n");
	printf("Gustav Mahler\n");
	return 0;
}
