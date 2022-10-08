#include<stdio.h>
#include"slp.h"
int turn(int len, int* arr) {
    for (int i = 0; i < 10; i++) {
        int temp = 0;
        for (int j = 0; j < len - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }

        }
    }return arr[len];
}