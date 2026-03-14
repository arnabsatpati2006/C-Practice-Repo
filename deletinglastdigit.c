#include<stdio.h>
int main(){
    int originalnum,lastnum,newnum;
    printf("Enter an integer:");
    scanf("%d",&originalnum);
    lastnum=originalnum%10;
    newnum=originalnum/10;
    printf("The last digit of %d is %d \n",originalnum,lastnum);
    printf("The number after deleting the last digit is %d \n ", newnum);
    return 0 ;
    
}