#include<stdio.h>

int main(){
    char c;
    printf("Enter your character here : \n");
    scanf("%c", &c);

    if(c >= 'a' && c <='z'){
        printf("Lower Case \n");
    }
    else if(c >= 'A' && c <= 'Z'){
        printf("Upper case \n");
    }
    else{
        printf("Not an english character");
    }

    return 0;
}
