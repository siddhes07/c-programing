
//Swap two numbers using a third variable

#include<stdio.h>
int main(){
    int a,b,temp;
     
    printf(" enter the value of a and b ");
    scanf("%d %d",&a,&b);

    temp = a;
    a= b ;
    b= temp ;

    printf("after swapping a=%d,b=%d\n",a,b);

    return 0;

}