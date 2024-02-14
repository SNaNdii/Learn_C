#include<stdio.h>
#include<string.h>

void swapAlpha(char str[]);

int main(){
    char s1[] = "Grapes";
    char s2[] = "Banana";

    // Find ascii value
    int n = strcmp(s1, s2);
    printf("%d", n);

    char str[] = "nandita";
    swapAlpha(str);
    for(int i=0; str[i]!='\0'; i++){
        printf("%s ", str[i]);
    }
    return 0;
}

//swap by using ascii value
void swapAlpha(char str[]){
    for(int i=0; str[i]!='\0'; i++){
        for(int j=i+1; str[j]!='\0'; j++){
            int m = strcmp(str[j], str[j+1]);
            if(m < 0){
                char temp = str[j];
                str[j] = str[j+1];
                str[j+1] = temp;
            }
        }
    }
}