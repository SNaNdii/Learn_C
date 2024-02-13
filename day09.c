#include<stdio.h>

void square(int n);
void sum(int* n);
int main(){
    int num = 10;
    square(num);
    printf("Number = %d \n", num);

    sum(&num);
    printf("Number = %d \n", num);
    return 0;
}

// Call  By  Value---------------
void square(int n){
    n = n*n;
    printf("Square = %d \n", n);
}

// Call  By  Reference------------
void sum(int* n){
    *n = (*n) + (*n);
    printf("Sum = %d \n", *n);
}