/*
 * @Author: qksuki qksuki@outlook.com
 * @Date: 2022-09-14 19:19:51
 * @LastEditors: qksuki qksuki@outlook.com
 * @LastEditTime: 2022-09-14 19:25:36
 * @FilePath: \codes\c\c_primer\ans\chapter\chapter_2\2.12.8.c
 * @Description:
 * 在C语言中，函数可以调用另一个函数。编写一个程序，调用一个名为one_three()的函数。该函数在一行打印单词“one”，再调用第2个函数
two()，然后在另一行打印单词“three”。two()函数在一行显示单词“two”。
main()函数在调用 one_three()函数前要打印短语“starting
now:”，并在调用完毕后显示短语“done!”。因此，该程序的输出应如下所示：
    starting　now:
    one
    two
    three
    done!
 * Copyright (c) 2022 by qksuki qksuki@outlook.com, All Rights Reserved.
 */

#include <stdio.h>

void one_three();
void two();

int main() {
	printf("staring now:\n");
	one_three();
	printf("done");
	return 0;
}

void tow() { printf("tow\n"); }

void one_three() {
	printf("one\n");
	tow();
	printf("three\n");
}
