/*
 * @Author: qksuki qksuki@outlook.com
 * @Date: 2022-10-14 21:36:42
 * @LastEditors: qksuki qksuki@outlook.com
 * @LastEditTime: 2022-10-15 11:54:57
 * @FilePath: \codes\c\testCode\Problem\Course\01\7.c
 * @Description:
 *
 * Copyright (c) 2022 by qksuki qksuki@outlook.com, All Rights Reserved.
 */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void showMenu();
void showExecutingMenu();
void showAdd();
void showSub();
void showMul();
void showDiv();
int getRandomNumber();

int main() {
	srand((unsigned)time(NULL));
	showMenu();
	return 0;
}

//菜单
void showMenu() {
	printf("100以内四则运算程序\n");
	printf("1. 开始测试\n");
	printf("2. 结束测试\n");
	printf("请输入: ");
	char flag;
	scanf("%c", &flag);
	if (flag == '1' || flag == '2') {
		switch (flag) {
		case '1': {
			int random = rand() % 10 + 1;
			while (random < 1 || random > 4) {
				random = rand() % 10 + 1;
			}
			switch (random) {
			case 1:
				showAdd();
				break;
			case 2:
				showSub();
				break;
			case 3:
				showMul();
				break;
			case 4:
				showDiv();
				break;
			}
			break;
		}
		case '2':
			printf("欢迎下次使用");
			exit(0);
		}
	} else {
		printf("输入错误, 请检查输入\n");
		showMenu();
	}
}

//运算时菜单模块
void showExecutingMenu() {
	printf("是否继续测试?\n");
	printf("1. 继续\n");
	printf("2. 结束\n");
	//清除缓冲区
	fflush(stdin);
	char flag;
	scanf("%c", &flag);
	if (flag == '1' || flag == '2') {
		switch (flag) {
		case '1': {
			//随机生成加减乘除
			int random = rand() % 10 + 1;
			while (random < 1 || random > 4) {
				random = rand() % 10 + 1;
			}
			switch (random) {
			case 1:
				showAdd();
				break;
			case 2:
				showSub();
				break;
			case 3:
				showMul();
				break;
			case 4:
				showDiv();
				break;
			}
			break;
		}
		case '2':
			printf("欢迎下次使用\n");
			exit(0);
			break;
		}
	} else {
		printf("输入错误, 请检查输入\n");
		showMenu();
	}
}

//加法模块
void showAdd() {
	int num_1 = getRandomNumber();
	int num_2 = getRandomNumber();
	int ans = 0;
	printf("%d + %d = ?\n", num_1, num_2);
	scanf("%d", &ans);
	while (ans != num_1 + num_2) {
		printf("错误, 请再思考一下\n");
		scanf("%d", &ans);
	}
	printf("正确!\n");
	showExecutingMenu();
}

//减法模块
void showSub() {
	int num_1 = getRandomNumber();
	int num_2 = getRandomNumber();
	int ans = 0;
	//若左侧数小于右侧, 则交换
	if (num_1 < num_2) {
		int temp = num_1;
		num_1 = num_2;
		num_2 = temp;
	}

	printf("%d - %d = ?\n", num_1, num_2);
	scanf("%d", &ans);
	while (ans != num_1 - num_2) {
		printf("错误, 请再思考一下\n");
		scanf("%d", &ans);
	}
	printf("正确!\n");
	showExecutingMenu();
}

//乘法模块
void showMul() {
	int num_1 = getRandomNumber();
	int num_2 = getRandomNumber();
	int ans = 0;
	printf("%d * %d = ?\n", num_1, num_2);
	scanf("%d", &ans);
	while (ans != num_1 * num_2) {
		printf("错误, 请再思考一下\n");
		scanf("%d", &ans);
	}
	printf("正确!\n");
	showExecutingMenu();
}

//除法模块
void showDiv() {
	//右侧取值 1 - 9
	int num_2 = rand() % 10 + 1;
	int num_1 = rand() % 100 + 1;
	int ans;
	while (num_1 % num_2 != 0) {
		num_1 = rand() % 1000 + 1;
	}

	printf("%d / %d = ?\n", num_1, num_2);
	scanf("%d", &ans);
	while (ans != num_1 / num_2) {
		printf("错误, 请再思考一下\n");
		scanf("%d", &ans);
	}
	printf("正确!\n");
	showExecutingMenu();
}

int getRandomNumber() {
	int randomNum;
	randomNum = rand() % 100 + 1;
	return randomNum;
}