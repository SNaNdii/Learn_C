#include<stdio.h>

//FUCTIONS----------------------------------
void printHello();
int sum(int a, int b);

int main(){
    printHello();
    printf("My sum is : %d", sum(3,6));
    return 0;
}

void printHello(){
    printf("Hello World \n");
}

int sum(int a,int b){
    return a+b;
}

// Difference b/w Arguement and Parameters
//1) Arguement => Values that are passed in function call.
//   Paramener => Values in function declaration and definition.

//2) Arguement => Used to send value.
//   Paramener => Used to recieve value.

//3) Arguement => actual parameter.
//   Paramener => formal parameter.