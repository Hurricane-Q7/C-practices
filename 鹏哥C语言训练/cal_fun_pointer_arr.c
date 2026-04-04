//计算器第三版，用了函数指针数组的知识来简化加法计算器功能
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//先实现一个简易版计算器（支持整数的加减乘除运算）
void menu()
{
	printf("*************************\n");
	printf("****1. cal 2. sub *******\n");
	printf("****3. mul 4. div *******\n");
	printf("****0. exit       *******\n");
}
int add(int x, int y)
{
	return x + y;
}
int sub(int x, int y)
{
	return x - y;
}
int mul(int x, int y)
{
	return x * y;
}
int div(int x, int y)
{
	return x / y;
}
int cal(int(*pfarr)(int, int),int input)
{
	int x = 0;
	int y = 0;
	printf("请输入两个数字：");
	scanf("%d %d", &x, &y);
	int ret = pfarr(x, y);
}
int main()
{
	
	int (*pfarr[5])(int, int) = { 0,add,sub,mul,div };
	int input = 0;
	do
	{
		menu();
		printf("输入选项:>");
		scanf("%d", &input);
		if (input == 0)
		{
			printf("程序退出！");
		}
		else if (input >= 1 && input <= 4)
		{
			int ret = cal(pfarr[input],input);//把函数指针数组的元素（也就是计算函数的地址传过去）
			printf("结果是：%d\n", ret);
		}
		else
		{
			printf("输入错误！\n");
		}
	}while (input);
	return 0;
}

