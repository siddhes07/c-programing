//read two integers, and perform addition, substraction and division with using a
//third variable


#include<stdio.h>
int main(){
    int a,b,c;

    printf("enter two number : ");
    scanf("%d %d",&a,&b);
    
    c=a+b;
    printf("addition %d \n",c);

    c=a-b;
    printf("subraction %d\n",c);
     
    c=a/b;
    printf("divisin%d \n",c);

    return 0;
}