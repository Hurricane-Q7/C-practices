//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include<math.h>
//输出图型：
//5
//    *
//   **
//  ***
// ****
//*****
//抽象：我们可以把这个图型抽象成' '和'*'组成的图型，所以我们只需要控制一下什么时候输出空字符，什么时候输出*就好了
//int main()
//{
//	int input = 0;
//	//input的值决定了输出的图形有几行和几列
//	scanf("%d", &input);
//	int i = 0;
//	int j = 0;
//	//外层循环控制输出几行内容、输出哪一行
//	for (i = 0; i < input; i++)
//	{
//		//内层循环决定一行内具体要输出几个' '和几个'*'
//		for (j = 0; j < input; j++)
//		{
//			//观察发现：第一行要打印input-1个' '
//			//第二行要打印input-2个空格
//			//第三行要打印input-3个空格
//			//发现规律，j从0开始，只需要把j控制小于input-i-1就好了
//			if (j<input-i-1)
//			{
//				printf(" ");
//			}
//			else
//			{
//				printf("*");
//			}
//		}
//		printf("\n");
//	}
//	return 0;
//}
