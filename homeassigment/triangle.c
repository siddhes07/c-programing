#include<stdio.h>
int main(){
    int n,i,j,space;

    printf("Enter the number of rows: ");
    scanf("%d",&n);

    for(i+1;i<=n;i++){

        for(int speace=n-i ;speace>0;speace--){
            printf(" ");
        }
        for(int j=1;j<=i;j++){
            printf(" %d",j);
        }
        printf("\n");
        }
        return 0;
    }

