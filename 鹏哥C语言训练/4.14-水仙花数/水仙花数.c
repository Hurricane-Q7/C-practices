#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>
//编写程序，输出1~10000的水仙花数
//什么是水仙花数：水仙花数是指一个n位数，其各位数字的n次幂之和的值等于该数字本身
int main()
{
	//产生0~10000数字
	int i = 0;
	for (i = 0; i < 10000; i++)
	{
		int Sum_of_digit = 0;
		//得到数字的位数ditgi_of_num
		int digit_of_num = 1;
		//digit_of_num表示数字的位数，位数起码有一位吧
		int tmp = i;
		//i是循环变量，在循环体内部最好别改动，这里用一个变量来存放i,用于方便得到位数
		while (tmp / 10)
		{
			tmp /= 10;
			digit_of_num++;
		}
		tmp = i;
		//判断数字的每一位的位数幂次方之和等不等于数字本身
		//利用pow函数，看它各位digit_of_num次幂之和等于不等于数字本身
		//然后利用数字/10来消除最后一位，循环
		while (tmp)
		{
			Sum_of_digit += pow(tmp%10,digit_of_num);

			tmp /= 10;//1234/10 -> 123/10 -> 12/10 -> 1/10 -> 0
		}
		if (Sum_of_digit == i)//判断
		{
			printf("[%d]是水仙花数!\n",i);
		}
	}
	return 0;
}
