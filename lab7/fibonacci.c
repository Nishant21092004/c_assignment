#include<stdio.h>
void fab(int x){
    int a=0,b=1;
    printf("%d ",b);
    for(int i=1;i<=x-1;i++){
        int c=a+b;
        printf("%d ",c);
        a=b;
        b=c;
    }
    return ;
}
int main(){
    int n;
    printf("enter the number: ");
    scanf("%d",&n);
    fab(n);
    return 0;
}