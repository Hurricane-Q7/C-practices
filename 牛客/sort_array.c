#include<stdio.h>
void sort(int* array,int n)
{
    int i = 0;
    int j = 0;
    int p = 0;//变量p用来记录最小元素下标（最初假设是arr[0]）
    //外层for循环控制对n个数字要进行几轮选择
    int tmp = 0;
    for(i=0;i<n-1;i++)
    {
        p = i;
        for(j=i+1;j<n;j++)
        {
            //内层循环控制对数组元素的比较，与更新最小元素下标
            //遍历i+1后的数组元素，与arr[p]比较,如果arr[j+1]小于arr[p]，更新p的值
           
            if(*(array+j)<*(array+p))//array[j]<array[p]
            {
                p=j;
            }
        }
        if(p!=i)
        {
            tmp = *(array+p);       //tmp = array[p]
            *(array+p) = *(array+i);//array[p] = array[i]
            *(array+i)=tmp;         //array[i] = tmp
        }
    }
}
void print_arr(int* array,int n)
{
    int i = 0;
    for(i=0;i<n;i++)
    {
        printf("%d ",*(array+i));
    }
}
int main()
{
    int n = 0;
    scanf("%d",&n);//输入n，数组长度
    int array[n];
    int i = 0;
    for(i=0;i<n;i++)
    {
        scanf("%d",&array[i]);//为数组中的每个元素赋值
    }
    sort(array,n);
    //先排好序（升序）

    print_arr(array,n);

    //然后再输出数组
    return 0;
}
