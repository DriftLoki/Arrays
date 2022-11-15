#include<stdio.h>

int main(void){
    int i;
    int ar[10];

    for(i = 0; i < 10; i++){
        ar[i] = i + 1;
    }
    for(i = 0; i < 10; i++){
        printf("%d %d\n", i, ar[i]);
    }
}