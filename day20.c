#include<stdio.h>
#include<string.h>
/*
--------------------File Output-Input--------------------

FILE :- 
    Container in a storage device to store data
    RAM is volatile, content can lost when program terminate. Here, files are used to persist the data.

Operations on FILE :-
    CREATE a file
    OPEN a file
    READ from a file
    WRITE in a file
    CLOSE a file

Types of FILE :-
    TEXT files - textual data, .txt , .c , .java , .js etc
    BINARY files - binary data , .exe , .mp3 , .jpg etc

FILE pointer :-
    FILE is a structure that need to be created for opening a file.
    A FILE ptr that points to this structure & is used to access the file.
    FILE *fptr;
*/

int main(){
    FILE *fptr;
    
//--> opening a file for reading
    fptr = fopen("Test.txt" , "r");    
    if(fptr == NULL){
        printf("File doesnt exist");
    }
    else{
        fclose(fptr);    //--> closing a file
    }



//--> opening a file for write . If file doesn't exists, it will automatically create
    fptr = fopen("NewTest.txt" , "w");    
    if(fptr == NULL){
        printf("File doesnt exist");
    }
    else{
        fclose(fptr);
    }



//Take file as an input and read
    fptr = fopen("Test.txt" , "r");   
    char ch[100];
    fscanf(fptr , "%s" , &ch);
    printf("File = %s \n", ch);
    fclose(fptr);



//File open in write mode and change data--
    fptr = fopen("Test.txt" , "w");
    fprintf(fptr , "%s" , "I am chaging previous data");



//EOF = End Of File
//it is like null. when we already done with our data, then program will give EOF
    fptr = fopen("Test.txt" , "r");   
    char c;
    c = fgetc(fptr);
    while(c != EOF){
        printf("%c", c);
        c = fgetc(fptr);
    }
    printf("\n");
    fclose(fptr);
    
    return 0;
}