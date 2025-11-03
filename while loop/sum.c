//sum all integers from 1 to n using a while loop.

#include<stdio.h>
int main(){
    int n,i=1,sum=0;

    printf( " enter a valuue of n : " );
    scanf( "%d",&n);

    while(i<=n){
        sum=sum+i;
        i++;
    }
    printf(" sum of all integers from 1 to %d is %d\n",n,sum);
    printf("\n");
    return 0;
}