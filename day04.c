// COnditional Statements-----------
#include<stdio.h>
int main(){
    int age;
    printf("Enter age here : \n");
    scanf("%d", age);

    // if(age >= 18){
    //     printf("Valid age for diving licence");
    // }
    // else{
    //     printf("InValid age for diving licence");
    // }




    //Ternary Operator-----------------------------------

    age >= 18 ?  printf("Valid age for diving licence") : printf("InValid age for diving licence");   

    return 0;
}


