#include<stdio.h>
#include<math.h>


int main(){
    // Arithmatic operator----------------
    int a,b,c;
    a=b=c=3;
    printf("Sum : %d \n", a+b+c);

    float x,y;
    x=y=5;
    printf("Products is : %.2f \n", x*y);

    float power = pow(a,b);
    printf("a to the power b : %.2f \n", power);
    


    // Relational operator----------------
    printf("%d \n", 4==3); // false returns 0
    printf("%d \n", 4 > 3); // true returns 1
    printf("%d \n", 4 != 3);


    // Logical operator----------------
    // && and operator , || or operator , ! not operator
    printf("Result of AND operator is %d \n", 4 != 3 && 4 < 6);
    printf("Result of OR operator is  %d \n", !(4 == 3 || 4 < 6));
    return 0;
}