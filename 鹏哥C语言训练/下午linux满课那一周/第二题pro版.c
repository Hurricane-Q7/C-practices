#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//多组输入，一个整数（2~20），表示直角三角形直角边的长度，即“ * ”的数量，也表示输出行数。
//针对每行输入，输出用“*”组成的对应长度的直角三角形，每个“*”后面有一个空格。
int main()
{
	int input = 0;
	scanf("%d", &input);
	int i = 0;
	//依旧外层循环控制输出几行
	for (i = 0; i < input; i++)
	{
		//内层for循环决定一行要输出什么内容
		for (int j = 0; j < input; j++)
		{
			if (j < input - 1-i)
			{
				//打印两个空格，因为每个*后面有一个空格，所以要对齐一下
				printf("  ");
			}
			else
			{
				printf("* ");
			}
		}
		printf("\n");//输出完一行，及时换行
	}
	return 0;
}