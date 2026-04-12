#include<stdio.h>
int main() {
    int j = 0;
    int i = 0;
    //飞机头
    for (i = 1; i <= 2; i++) {
        for (j = 1; j <= 7; j++) {
            if (j > 5) {
                printf("*");
                continue;
            }
            printf(" ");
        }
        printf("\n");
    }
    //飞机身
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 12; j++) {
            printf("*");
            if (j == 11) {
                printf("\n");
            }
        }
    }
    //飞机尾
    for (i = 1; i <= 2; i++) {
        for (j = 1; j <= 8; j++) {
            if (j >= 1 && j < 5) {
                printf(" ");
            }
            else if ((j == 5) || (j == 8)) {
                printf("*");
            }
            else printf(" ");
        }
        printf("\n");
    }
    return 0;
}
