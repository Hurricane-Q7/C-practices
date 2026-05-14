#define _CRT_SECURE_NO_WARNINGS
//第二题：
//题目介绍：
//算法思想（选择排序版）：先输入n，表示有n个学生，然后再输入n个学生的成绩，对这n个学生的成绩进行降序处理，大的放前面，小的放后面，最后打印前5个就彳亍了
#include<stdio.h>
int main() {
    int tmp = 0;
    int n = 0;
    int i = 0;
    int j = 0;
    scanf("%d", &n);
    int scores_of_five[n];
    for (i = 0; i < n; i++) {
        scanf("%d", &scores_of_five[i]); //输入n个学生的成绩
    }
    //核心部分：选择n个学生里面成绩前5的成绩
    for (i = 0; i < n; i++) {
        int p = i;
        for (j = i + 1; j < n; j++) {
            if (scores_of_five[p] < scores_of_five[j]) {
                p = j;//找到更大的下标
            }
        }
        if (p != i) {
            tmp = scores_of_five[p];
            scores_of_five[p] = scores_of_five[i];
            scores_of_five[i] = tmp;
        }

    }
    for (i = 0; i < 5; i++) {
        printf("%d ", scores_of_five[i]);
    }
    return 0;
}