#include<stdio.h>
#include<stdlib.h> //for malloc()

/*
--------------Memory Allocation-------------------

Dynamic Memory Allocation :- It is a way to allocate memory to a data structure during the runtime;

Compile time memory:- when compiler is running and analyzing how much amount of memory we need.
Run time memory :- When our code actually runs, in between our input and output.

Functions in DMA :-
    malloc() => memory allocation
                takes the number in bytes and it will return a pointer of type void
                ptr = (int*) malloc(5*sizeof(int));

    calloc() => continous allocation , Initialize with 0
                ptr = (int*) calloc(5, sizeof(int));

    free() => we use it to free memory that is allocated using malloc and calloc
            free(ptr);

    realloc() => re allocation , 
                increase or decrease the memory using the same pointer and size.
                ptr = realloc(ptr , newSize);

*/
int main(){

    //malloc()--------
    int *ptr;
    ptr = (int*) malloc(5*sizeof(int)); //=> it will return 5*4 = 20 bytes of memory
    ptr[0] = 1;
    ptr[1] = 3;
    ptr[2] = 5;
    ptr[3] = 7;
    ptr[4] = 9;

    for(int i=0; i<5; i++){
        printf("%d \n", ptr[i]);
    }
    printf("%s \n" , "==============");


    // calloc()--------------
    int *ptr1;
    ptr1 = (int *) calloc(5, sizeof(int));

    for(int i=0; i<5; i++){
        printf("%d \n", ptr1[i]); // it will print 0.00, means initialize with 0
    }
    printf("%s \n" , "==============");


    // free()-------------
    free(ptr1);
    ptr1 = (int*) calloc(2, sizeof(int));

    for(int i=0; i<2; i++){
        printf("%d \n", ptr1[i]); // it will print 0.00, means initialize with 0
    }
    printf("%s \n" , "==============");


    //realloc()-----------
    int *ptr2;
    ptr2 = (int*) calloc(3, sizeof(int)); //=> it will return 5*4 = 20 bytes of memory
    ptr2[0] = 1;
    ptr2[1] = 3;
    ptr2[2] = 5;

    ptr2 = realloc(ptr2 , 7);
    ptr2[0] = 1;
    ptr2[1] = 3;
    ptr2[2] = 5;
    ptr2[3] = 7;
    ptr2[4] = 9;
    ptr2[5] = 11;

    for(int i=0; i<6; i++){
        printf("%d \n", ptr[i]);
    }
    printf("%s \n" , "==============");

    return 0;
}