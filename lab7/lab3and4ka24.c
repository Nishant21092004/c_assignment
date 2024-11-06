#include<stdio.h>
int main(){
    int x,n;
    printf("enter x: ");
    scanf("%d",&x);
    printf("enter n: ");
    scanf("%d",&n);
    if(n==1){
        printf("%d",1+x);
    }
    else if(n==2){
         printf("%d",1+x/n);
    }
    else if(n==3){
        printf("%d",1+x*x*x);
    }
    else printf("%d",1+n*x);
    return 0;
}