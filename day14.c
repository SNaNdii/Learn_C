// -------------STRINGS-------------
#include<stdio.h>

void fullName(char firstName[]);

int main(){
    char name[] = {'N', 'a', 'n', 'd', 'i', 't', 'a', '\0'}; // here we are initializing string by adding every character. In this method, adding null character is mandatory
    char name2[] = "Nandita"; // 2nd method of initializing any string. No need to add any null character, compiler will automatically read.
    
    char firstName[50]; //String Initialization with the form of an array
    char lastName[50]; //String Initialization with the form of an array

    scanf("%s", firstName); //Taking input of string
    printf("Your first name is %s", firstName); //Printing Output

    scanf("%s", lastName);  //Taking input of string
    printf("Your last name is %s \n", lastName); //Printing Output

    fullName(firstName); // Functon Calling
    fullName(lastName); // Functon Calling

    return 0;
}

// create two strings of first name and last name and iterate this by using loop--

void fullName(char arr[]){
    for(int i=0; arr[i]!='\0'; i++){
        printf("%c ", arr[i]);
    }
}