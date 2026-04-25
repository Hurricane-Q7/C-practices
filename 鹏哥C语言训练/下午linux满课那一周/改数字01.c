//描述：小乐乐喜欢数字，尤其喜欢0和1。他现在得到了一个数，想把每位的数变成0或1。如果某一位是奇数，就把它变成1，如果是偶数，那么就把它变成0。请你回答他最后得到的数是多少。
#include<stdio.h>
int main()
{
     //输入
    int num = 0;
    int digit_of_num = 1;//统计数字的位数,默认一位
    scanf("%d",&num);
    int tmp = num;
    //调整
    while(tmp/10)
    {
        digit_of_num++;
        tmp /= 10;//去掉最后一位
    }
    int arr[digit_of_num];
    //把num的每一位数用数组arr来保存
    int i = 0;
    for (i = digit_of_num-1;i>=0 ;i--) 
    {
       arr[i] = num % 10;
       num /=10;
    }
    //核心：判断数组元素是偶数or奇数？偶数把元素变为0，奇数就变为1
    for(i=0;i<digit_of_num;i++)
    {
       if(arr[i]>=2)
       {
         if(arr[i]%2==0)//偶数
        {
            arr[i]=0;
        }
        if(arr[i]%2==1)//奇数
        {
            arr[i]=1;
        }
       }
    }
    //输出：牛客对格式有要求，belike:0000 0001这样的，结果却要输出 1
    int flag = 0;
    //flag变量用来记录从后往前遍历数组元素不为偶数的下标数
    for(i=digit_of_num-1;i>=0;i--)
    {
         if(arr[i]%2==0)
         {
            continue;//跳过剩下代码，来到循环变量调整部分
         }
         if(arr[i]%2==1)
         {
            flag=i;
         }
    }
    //从flag开始打印
    for(flag;flag<digit_of_num;flag++)
    {
       printf("%d",arr[flag]);  
    }
    return 0;
}
