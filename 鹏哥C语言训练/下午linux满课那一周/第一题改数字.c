#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>
//牛客BC116 乐乐改数字
//鹏哥的方法（十进制计算）
//题目：如果某一位是奇数，就把它变成1，如果是偶数，那么就把它变成0。请你回答他最后得到的数是多少
// 数字：1234 改后：1010，改动后的数字是十进制的表现形式，那么就可以用十进制的方法输出
//算法思想：对输入数字的每一位数判断，判断奇数or偶数，判断后计算变动后的数字的每一位的值乘上权重后的结果，给
//上一个变量sum累加每位数字乘后的值，其实也就是计算10进制数字，最后输出sum即可
int main()
{		
	//输入
	int num = 0;
	int sum = 0;
	int i = 0;
	scanf("%d", &num);
	while (num)
	{
		int bit = num % 10;//提取数字的每一位

		if (bit % 2 == 1)
		{
			bit = 1;
		}
		if (bit % 2 == 0)
		{
			bit = 0;
		}
		sum += bit * pow(10, i);
		i++;
		num /= 10;
	}
	//输出
	printf("%d\n", sum);

	return 0;
}