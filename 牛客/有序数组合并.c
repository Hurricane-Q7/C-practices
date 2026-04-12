#include<stdio.h>
int main()
{
	int n = 0;//arr1数组的元素个数
	int m = 0;//arr2数组的元素个数
    scanf("%d %d", &n, &m);
	int arr1[n];
	int arr2[m];
	//arr1
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &arr1[i]);
	}
	//arr2
	for (int j = 0; j < m; j++)
	{
		scanf("%d", &arr2[j]);
	}
	//输出部分
    int i = 0;//循环变量i，表示arr1的下标变化
    int j = 0;//循环变量j，表示arr2的下标变化

    while(i<n && j<m)//(i<n && j<m)==1表示arr1与arr2还有可操作空间
    {
        //先打印小的
        if(arr1[i]<arr2[j])
        {
            printf("%d ",arr1[i]);
            i++;
        }
        else  {
         printf("%d ",arr2[j]);
         j++;
        }
    }
    if(i<n)//走到这里说明arr1还有元素未打印，arr2已经打印好了，(j<m)是不成立的
    {
        for(;i<n;i++)
        {
            printf("%d ",arr1[i]);
        }
    }
    else if(j<m)//走到这里说明arr2还有元素未打印，arr1已经打印好了，(i<n)是不成立的
    {
        for(;j<m;j++)
        {
            printf("%d ",arr2[j]);
        }
    }
	return 0;
}
