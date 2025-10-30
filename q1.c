//read two integers, and perform addition, substraction and division without using a
//third variable


#include<stdio.h>
int main(){
    int a,b;

    printf("enter two number : ");
    scanf("%d %d",&a,&b);
    
    printf("addition %d \n",a+b);
    printf("subraction %d\n",a-b);

    return 0;
}