#include<stdio.h>
int main(){
    int n,i=1;
printf(" enter a value of n : ");
scanf("%d",&n);

while(i<= n){
    if(i%2==0){
        printf("%d\n",i);
        }
        i++;
}
printf("\n");
return 0;
}