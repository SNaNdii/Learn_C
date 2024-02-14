#include<stdio.h>
#include<string.h>

/*
                 ---------------------SALTING------------------
=> Salting is the process to secure your passowrd
=> In salting process, a small string would automatically add in your password at any position.
=> Example :-
    password = "test@1234";
    salt = "abc"
    saved password in database = "test@12abc34"
*/
void salting(char pass[]);

int main(){
    char pass[100];
    scanf("%s", pass);

    salting(pass);
    return 0;
}

void salting(char pass[]){
    char salt[] = "123";
    char newPass[200];

    strcpy(newPass, pass); //Pass = "test"
    strcat(newPass, salt); //newPass = "test" + "123"
    puts(newPass);
}