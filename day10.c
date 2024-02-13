#include <stdio.h>
// SWAP algorith-----
// for swapping, we are using call by reference. We are interchanging values at address.

void swap(int *a, int *b);

int main(){
    int a = 3;
    int b = 5;
    swap(&a, &b);
    printf("In Main a = %d and In Main b = %d \n", a, b);
    return 0;
}

void swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}