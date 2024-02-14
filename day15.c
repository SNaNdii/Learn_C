// -------------STRINGS Full Line Input-------------
#include<stdio.h>
#include<string.h>
int main(){
    char str[100];
    fgets(str, 100, stdin); //Taking input of whole line
    puts(str); //can print input (use for output);

    int n = strlen(str); //length of string
    printf("Length of string is : %d \n", n);


    char first[100] = "Nandita"; // if you want to concat, you need to put some space in your first String
    char last[] = "Singh";
    strcat(first, last); // concatenation
    puts(first);
    // printf("%s", str);
    return 0;
}


/* ****IMPORTANT POINT****

char *str = "Hello World"  //Can be Reinitialize
char str2[] = "Hello World"; //Cannot be reinitialize

*/