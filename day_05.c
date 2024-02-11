#include<stdio.h>
int main(){
    int n=10;

    // For  Loops -------------------------------
    for(int i=1; i<=n; i++){
        printf("%d ", i);
    }
    printf("\n");


    // While Loops-------------------------------
    int j=1;
    while(j<n-3){
        printf("%d ", j);
        j++;
    }
    printf("\n");
    
    
    // Do-While Loops-------------------------------
    int a = 5;
    do{
        printf("%d ", a);
        a++;
    }while(a <=n);

    return 0;
}