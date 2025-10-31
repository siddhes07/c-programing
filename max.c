#include<stdio.h>
int main(){
    int arr[5]={2,5,7,8,9};
    int max=arr[0];
    for(int i=0;i<=4;i++){
        if(max<arr[i]){
            max=arr[i];
        }
    }
    printf("%d",max);
    return 0;
}