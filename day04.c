// COnditional Statements-----------
#include<stdio.h>
int main(){
    int age;
    printf("Enter age here : \n");
    scanf("%d", age);

    if(age >= 18){
        printf("Valid age for diving licence");
    }
    else{
        printf("InValid age for diving licence");
    }



    //Ternary Operator-----------------------------------

    age >= 18 ?  printf("Valid age for diving licence") : printf("InValid age for diving licence");   



    //Switch case----------------------------------
    int day;
    printf("Enter day number (1-7) : \n");
    scanf("%d", &day);
    switch(day){
        case 1: printf("Monday");
        break;
        case 2: printf("Tuesday");
        break;
        case 3: printf("Wednesday");
        break;
        case 4: printf("Thursday");
        break;
        case 5: printf("Friday");
        break;
        case 6: printf("Saturday");
        break;
        case 7: printf("Sunday");
        default : printf("Number not valid");
    }
    return 0;
}


