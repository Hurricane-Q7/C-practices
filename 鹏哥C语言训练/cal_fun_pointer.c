//计算器第二版，用函数指针的知识来简化代码
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//先实现一个简易版计算器（支持整数的加减乘除运算）
void menu()
{
	printf("*************************\n");
	printf("****1. add 2. sub *******\n");
	printf("****3. mul 4. div *******\n");
	printf("****0.  exit      *******\n");
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
int cal(int (*pf)(int, int))
{
	int x = 0;
	int y = 0;
	int ret = 0;
	printf("请输入两个数字：");
	scanf("%d %d", &x, &y);
	ret = (*pf)(x, y);
	printf("结果是：%d", ret);
}
int main()
{
	int cal(int (*pf)(int, int));
	int input = 0;
	menu();
	printf("请输入你的选项:>");
	scanf("%d", &input);
	switch (input)
	{
	case 1:
		cal(add);//把函数的地址给传过去，来实现对add函数的间接调用
		break;
	case 2:
		cal(sub);//同上
		break;
	case 3:
		cal(mul);//同上
		break;
	case 4:
		cal(div);//同上
		break;
	case 0:
		printf("程序退出！\n");
		break;//这个break是用来跳出switch语句的
		break;//这个break是用来当作case语句的终点的，来阻止case语句往下穿透！
	default:
		printf("输入错误！"); 
		break;
	}
	return 0;
}

