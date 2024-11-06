#include<stdio.h>
int main (){
    int n;
    printf("enter n");
    scanf("%d",&n);
    int a=1,b=n-1;
    for(int i=1;i<=n;i++){
    for(int j=1;j<=b;j++){
        printf(" ");
    }
    b--;
    for(int k=1;k<=a;k++){
        printf(" *");
    }
    a=a+1;
    printf("\n");
    }
    return 0;
}