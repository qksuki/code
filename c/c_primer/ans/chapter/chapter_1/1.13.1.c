/*
 * @Author: qksuki qksuki@outlook.com
 * @Date: 2022-09-12 15:34:09
 * @LastEditors: qksuki qksuki@outlook.com
 * @LastEditTime: 2022-09-14 19:34:29
 * @FilePath: \codes\c\c_primer\ans\chapter\chapter_1\1.13.1.c
 * @Description:
 * 你刚被MacroMuscle有限公司聘用。该公司准备进入欧洲市场，需要一个把英寸单位转换为厘米
 * 单位（1
 * 英寸=2.54厘米）的程序。该程序要提示用户输入英寸值。你的任务是定义程序目标和设计程序（编程过的第1步和第2步）
 * Copyright (c) 2022 by qksuki qksuki@outlook.com, All Rights Reserved.
 */

#include <stdio.h>
int main(void) {
	double inch, cm;

	printf("input the inches:\n");
	scanf("%lf", &inch);
	cm = inch * 2.54;
	printf("%f cm\n", cm);

	return 0;
}
