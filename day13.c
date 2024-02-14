// Multi-Dimensional Array--------------
#include<stdio.h>

void multiArray(int table[][10], int n, int m, int num);

int main(){
    int table[4][10];

    multiArray(table, 0, 10, 2);
    multiArray(table, 1, 10, 3);
    multiArray(table, 2, 10, 4);
    multiArray(table, 3, 10, 5);

    for(int i=0; i<4; i++){
        for(int j=0; j<10; j++){
            printf("%d \t", table[i][j]);
        }
        printf("\n");
    }

    return 0;
}

void multiArray(int table[][10], int n, int m, int num){
    for(int i=0; i<m; i++){
        table[n][i] = num * (i+1);
    }
}