// Arithmatic operator----------------
#include<stdio.h>
#include<math.h>
int main(){
    int a,b,c;
    a=b=c=3;
    printf("Sum : %d \n", a+b+c);

    float x,y;
    x=y=5;
    printf("Products is : %.2f \n", x*y);

    float power = pow(a,b);
    printf("a to the power b : %.2f \n", power);
    return 0;
}