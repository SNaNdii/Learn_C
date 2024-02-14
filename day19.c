#include<stdio.h>
#include<string.h>

/*
Enter address of 5 people--

Typedef => we can use typedef to make an alias of any struct name-----------------
*/


typedef struct Student{
    int roll;
    float cgpa;
    char name[100];
}st;

typedef struct ComputerScienceStudent{
    int roll;
    float cgpa;
    char name[100];
}cse;

typedef struct address{
    int houseNo;
    int block;
    char city[100];
    char state[100];
}add;

void printAdd(struct address ad);

int main(){
    struct address adds[3];

    printf("Enter details of person - 01");
    scanf("%d", &adds[0].houseNo);
    scanf("%d", &adds[0].block);
    scanf("%s", adds[0].city);
    scanf("%s", adds[0].state);

    printAdd(adds[0]);

    printf("Enter details of person - 02");
    scanf("%d", &adds[1].houseNo);
    scanf("%d", &adds[1].block);
    scanf("%s", adds[1].city);
    scanf("%s", adds[1].state);

    printAdd(adds[1]);

    printf("Enter details of person - 03");
    scanf("%d", &adds[2].houseNo);
    scanf("%d", &adds[2].block);
    scanf("%s", adds[2].city);
    scanf("%s", adds[2].state);

    printAdd(adds[2]);

    return 0;
}

void printAdd(struct address ad){
    printf("House no = %d , Block = %d , City = %s , State = %s \n", ad.houseNo ,  ad.block,  ad.state, ad.houseNo );
}