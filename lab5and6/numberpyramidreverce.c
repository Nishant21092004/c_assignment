#include<stdio.h>
int main (){
    int n;
    printf("enter number of rows");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        int a=i-1;
        for(int j=1;j<=n-i;j++){
            printf(" ");
        }
        for(int k=1;k<=i;k++){
            printf("%d",k);
        }
        for(int l=1;l<=i-1;l++){
            printf("%d",a);
            a--;
        }
        printf("\n");
    }
    return 0;
}