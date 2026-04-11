#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<assert.h>
void* my_memmove(void* dest, void* src, size_t num)
{
	assert(dest && src);
	void* ret_value = dest;
	if (dest < src)
	{
		//dest在src的前面，从前向后拷贝
		while (num--)
		{
			*(char*)dest = *(char*)src;
			dest = (char*)dest + 1;
			src = (char*)src + 1;//调整指针指向内容
		}
	}
	else
	{
		//dest在src的后面或相同位置,从后向前拷贝，需要得到末尾元素
		while (num--)
		{
			*((char*)dest + num) = *((char*)src + num);//(char*)dest+num-1是得到末尾元素的操作;
		}
	}
}
int main()
{
	int arr1[] = { 1,2,3,4,5,6,7,8,9,10 };
	int arr2[20] = { 0 };
	//预期结果：1 2 1 2 3 4 5 8 9 10;
	my_memmove(arr1 + 2, arr1, 20);
	//把数字1，2，3，4，5，复制到3，4，5，6，7的位置上
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		printf("%d ", arr1[i]);//输出
	}
	return 0;
}
