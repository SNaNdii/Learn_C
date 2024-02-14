#include<stdio.h>
#include<string.h>

/*
 -----------------STRUCTURES------------------
 A collection of values of different Data Types
 example :- if you want to store whole information of any student
            name(String);
            rollNo(Integer);
            cgpa(float);

For this, we are using struct keyword
Benifits : Good data management
        No need to declare more variables
*/

struct Student{
    char name[100];
    int roll;
    float cgpa;
};


int main(){
    struct Student s;
    strcpy(s.name, "Nandita");
    s.roll = 1;
    s.cgpa = 8.9;
    printf("Student name : %s \n", s.name);
    printf("Student Roll number : %d \n", s.roll);
    printf("Student cgpa : %f \n", s.cgpa);

            //or
    struct Student s1 = {"Nandita", 101, 8.5};
    printf("Student name : %s \n", s1.name);
    printf("Student Roll number : %d \n", s1.roll);
    printf("Student cgpa : %f \n", s1.cgpa);



    //Arrays structure-----------------------
    struct Student ME[100];
        ME[0].roll = 101;
        ME[0].cgpa = 8.2;
        strcpy(ME[0].name, "Nandita");
    
    struct Student CS[100];
    struct Student ECE[100];

    return 0;
}