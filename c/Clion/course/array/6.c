/*
 * @Author: qksuki qksuki@outlook.com
 * @Date: 2022-10-29 22:33:07
 * @LastEditors: qksuki qksuki@outlook.com
 * @LastEditTime: 2022-10-29 23:09:33
 * @FilePath: \codes\c\Clion\course\array\6.c
 * @Description:
 *
 * Copyright (c) 2022 by qksuki qksuki@outlook.com, All Rights Reserved.
 */
#include <stdio.h>

int main() {
	 setbuf(stdout, NULL);
	double score[5];
	double sumScore = 0;
	double aveScore;
	for (int i = 0; i < 3; ++i) {
		printf("请输入第 %d 名学生的课程成绩, 依次为语文, 数学, 英语, 化学, "
		       "物理\n",
		       i + 1);
		for (int j = 0; j < 5; ++j) {
			scanf_s("%lf", &score[j]);
			sumScore += score[j];
		}
		aveScore = sumScore / 5;
		printf("总分: %.2f\n", sumScore);
		printf("平均分: %.2f\n", aveScore);
	}
	return 0;
}