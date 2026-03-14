#include<stdio.h>
int main(){
    float a , b ,sum,diff;
    printf("Enter the number:");
    scanf("%f",&a);
    printf("Enter the number:");
    scanf("%f",&b);
    sum=a+b;
    diff=a-b;
    printf("The sum of the two numbers: %f\n",sum);
    printf("The difference of the two number:%f\n",diff);
    return 0;
}