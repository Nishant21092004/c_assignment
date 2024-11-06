#include<stdio.h>
void notprime(int x){
    int a=1;
    for(int i=2;i<=x-1;i++){
        if(x%i==0){
            a=0;
            break;
        }
    }
        if(a==1) printf("1");
        else printf("0");
    return;
}

int main(){
    int n;
    printf("enter the number: ");
    scanf("%d",&n);
     notprime(n);
    return 0;
}