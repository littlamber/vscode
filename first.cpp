#include<stdio.h>
#include"slp.h"
int main() {
    int len = 10;
    int arr[10];

    for (int i = 0; i < 10; i++) {
        printf("��������ĵ�%d����:", i + 1);
        scanf_s("%d", &arr[i]);
    }
    turn(len, arr);

    for (int i = 0; i < len; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}