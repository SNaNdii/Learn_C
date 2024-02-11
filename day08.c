#include<stdio.h>

/*
Pointer variable => used to find the value
                    syntax is *
& => address of variable
    use & with variable to finc the address
*/

int main(){
    int age = 20;
    printf("Old Age %d \n", age);

    // we are saving address of age in ptr variable. Here prtr is a pointer variable
    // data type of pointer is denoting by %p
    int *ptr = &age;
    printf("Address of age %p \n", *ptr); 

    // Now if i want to find the value of that address, which is saved in pointer variable
    int age2 = *ptr;
    printf("New Age %d \n", age2);
    
    return 0;
}