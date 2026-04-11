#define _crt_secure_no_warnings
#include<stdio.h>
#include<string.h>
//第二题：（自己写的，类型于选择排序法）
//二.输入一个整型数组，实现一个函数
//来调整该数组中数字的顺序使得数组中所有的奇数位于数组的前半部分，偶数位于数组的后半部分
//我的算法思想：
//从左往右遍历数组元素，从左往右找，遇到偶数判断下一位数字是偶数还是奇数，偶数跳过，奇数交换！
//                                  遇到奇数就跳过，直接遍历下一个数字
void rearrange_arr(int arr[], size_t len)
{
	int i = 0;
	int j = 0;
	int tmp = 0;
	int flag = 0;
	int save_index = 0;
	for (i = 0; i < len; i++)
	{
		flag++;
		save_index = i;
		for (j = i + 1; j < len; j++)
		{
			if ((arr[save_index] % 2) == 0)
			{
				//进来这里已经意味arr[save_index]是偶数，判断下一位数字
				if ((arr[j]) % 2 == 0)
				{
					continue;
				}
				else //发现arr[save_index]的后一位是奇数的话，进行交换
				{
					tmp = arr[save_index];
					arr[save_index] = arr[j];
					arr[j] = tmp;
					break;
				}
			}
			else //arr[save_index]为奇数
			{
				flag++;
				break;//当前为奇数无需狡猾，break终止查找
			}
		}
	}
	printf("for:%d\n", flag);
}
void print_arr(int* arr, size_t len)
{
	int m = 0;
	for (m = 0; m < len; m++)
	{
		printf("%d ", arr[m]);
	}
	printf("\n");
}
int main()
{
	int flag = 0;
	int i = 0;
	int arr[10] = { 0 };
	//输入
	printf("请输入：\n");
	for (i = 0; i < 10; i++)
	{
		scanf("%d", &arr[i]);
	}
	size_t len = sizeof(arr) / sizeof(arr[0]);
	//调整
	rearrange_arr(arr, len);
	//输出
	printf("调整后：\n");
	print_arr(arr, len);
	return 0;
}
//鹏哥版：(类似于快速排序的算法思想！)
//题目要求：操作一个数组，使其数组前半部分放奇数，右半部分放偶数
//算法思想：分别从数组的左右两端来查找数字，左边负责找偶数，找到偶数停下来，遇到奇数就遍历下一位
//右边找奇数，找到奇数停下来，遇到偶数就继续遍历下一位
void move_arr_even(int arr[], size_t len)
{
	int left = 0;
	int right = len - 1;
	
	while (left < right)
	{
		//这个while循环负责在左边找数字，左边找偶数，找到偶数停下来，遇到奇数就继续遍历下一位
		while ((left<right)&&(arr[left] % 2 == 1))
		{
			left++;
		}
		//这个while循环负责在右边找数字，右边找奇数，找到奇数停下来，遇到偶数就继续遍历下一位
		while ((left<right)&&(arr[right] % 2 == 0))
		{
			right--;
		}
		//最终交换在左边找到的偶数和在右边找到的奇数
		if (left < right)
		{
			int tmp = 0;
			tmp = arr[left];
			arr[left] = arr[right];
			arr[right] = tmp;
			left++;
			right--;
		}
	}
}
void print_arr(int* arr, size_t len)//数组输出
{
	int i = 0;
	for (i = 0; i < len; i++)
	{
		printf("%d ", *(arr + i));
	}
	printf("\n");
}
int main()
{
	int i = 0;
	int arr[10] = { 0 };
	//输入
	printf("请输入：\n");
	for (i = 0; i < 10; i++)
	{
		scanf("%d", &arr[i]);
	}
	size_t len = sizeof(arr) / sizeof(arr[0]);
	//调整数数组部分
	move_arr_even(arr, len);
	//输出
	printf("调整后：\n");
	print_arr(arr, len);
	return 0;
}
