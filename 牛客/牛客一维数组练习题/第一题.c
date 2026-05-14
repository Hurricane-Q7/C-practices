#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//第一题
//输入一个n和x，然后统计x在1~n这个区间内部一共出现了几次
//最后输出次数
//第一版：
//算法思想：
//先生成1~n内的数字，然后有序地放入数组里面，然后从arr[0]开始对数组元素进行一一统计数字
//，先统计个位数字，再统计多位数字，核心操作是对/和%运算符的应用。
int main() {
    int n = 0;
    int x = 0;
    int count_of_x = 0;
    scanf("%d %d", &n, &x);
    int arr[10];//利用数组储存，其实完全可以不用这样写，这样太浪费空间了
    for (int i = 0; i < n; i++) {
        arr[i] = i + 1;//给数组赋值
    }
    for (int j = 0; j < n; j++) {
        if (arr[j] < 10 && x==arr[j]) {
            count_of_x++;
        }
        else {
            while (arr[j]) {
                if ((arr[j] % 10) == x) {
                    count_of_x++;
                    arr[j] /= 10; // 消除数字的最后一位
                }
                else {
                    arr[j] /= 10;
                }
            }
        }
    }
    printf("%d", count_of_x);
    return 0;
}
//第二版：升级版
int main()
{
    int n, x;
    scanf("%d %d", &n, &x);
    int i;
    int count = 0;
    for (i = 1; i <= n; i++)
    {
        int m = i;
        while (m)
        {
            if (m % 10 == x)
                count++;
            m /= 10;
        }
    }
    printf("%d\n", count);
}
