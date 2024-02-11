#include<stdio.h>

void printHW(int count);  //Function calling - Print hello world 5 times
int sum(int n);  //Function calling - Sum of n natural numbers
int fact(int n);  //Function calling - Factorial of n numbers
int fibonacci(int n);  //Function calling - Fibonacci series

int main(){

    printHW(5);  //Function calling - Print hello world 5 times
    printf("Sum of n natural numbers : %d \n",sum(10));   //Function calling - Sum of n natural numbers
    printf("Factorial is : %d \n", fact(8));   //Function calling - Factorial of n numbers
    printf("Fibonacci value is : %d \n", fibonacci(10));  //Function calling - Fibonacci series

    return 0;
}


// Print hello world five times by using recursion ---------
void printHW(int count){
    if(count == 0){
        return;
    }
    printf("Hello World %d \n", count);
    printHW(count-1);
}


// sum of first n natural numbers-------------------------
int sum(int n){
    if( n == 1){
        return 1;
    }
    return sum(n-1) + n;
}


// Find Factorial-------------------------
int fact(int n){
    if(n == 1){
        return 1;
    }
    return fact(n-1) * n;
}


// Print n terms of fibonacci sequence---------------
int fibonacci(int n){
    if(n == 0){
        return 0;
    }
    if(n == 1){
        return 1;
    }
    return fibonacci(n-1) + fibonacci(n-2);
}
