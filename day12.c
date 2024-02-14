#include<stdio.h>

void iterateMarks(int marks[], int n);
void reverseArray(int marks[], int n);
void fibo(int num[], int m);

int main(){
    int marks[] = {78, 95, 89, 81, 80};
    int n = sizeof(marks) / sizeof(marks[0]); // This is how we can find the length of an array

    iterateMarks(marks, n);
    printf("\n");
    
    int num[] = {};
    int m = 10;
    fibo(num, m);
    
    return 0;
}


// Arrays Iterate Function ------------------------
void iterateMarks(int marks[], int n){
    reverseArray(marks, n); 

    for(int i = 0; i<n; i++){
        printf("%d \t", marks[i]);
    }
}


// Arrays reverse function -------------------------
//Call by reference = it will chnage your actual array in your main function
void reverseArray(int marks[], int n){
    for(int i=0; i<n/2; i++){
        int temp = marks[i];
        marks[i] = marks[n-i-1];
        marks[n-i-1] = temp;
    }
}


// Store first n fibonacci number -------------------------
void fibo(int num[], int m){
    num[0] = 0;
    num[1] = 1;
    for(int i=2; i<m; i++){
        num[i] = num[i-1] + num[i-2];
        printf("%d \t", num[i]);
    }
}