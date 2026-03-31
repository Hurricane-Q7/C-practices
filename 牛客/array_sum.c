//用C语言实现对数组的求和
#include<stdio.h>
int cal(int*array,int n  )//一个求和函数
{
    int sum = 0;
    int i = 0;
    for(i=0;i<n;i++)
    {
        sum = sum + *(array+i);//对指针变量解引用操作
    }
    return sum;
}
int main()
{
    int n = 0;
    scanf("%d",&n);
    int array[n];
    int i = 0;
    for(i=0;i<n;i++)
    {
        scanf("%d",&array[i]);
    }
  int return_value = cal(array,n);//接收返回值
  printf("%d",return_value);
}
