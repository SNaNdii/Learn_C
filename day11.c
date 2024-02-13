#include<stdio.h>

// ---------------------ARRAYS---------------------

int main(){
    int marks[] = {45, 56, 76, 43, 98};
    int n = sizeof(marks) / sizeof(marks[0]);

    char subjectId[] = {'h', 'e', 'c', 'p', 'm'};
    int *ptr = &marks[0];

    printf("1st Index Value %d \n", marks[0]);  //wil give value which is 45
    printf("1st Index Address %d \n", ptr); // will give address
    printf("1st Index Value %d \n", *ptr); //wil give value which is 45

    return 0;
}