#include<stdio.h>
int main(){
    int a=66;
    int n;
    printf("enter the number");
    scanf("%d",&n);
    if(a==n){
        printf("your guess is true");
    }
    else printf("you have wrong guess");
    return 0;
}