#include<stdio.h>
int main (){
    int n;
    printf("enter n");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(i==j){
                printf("1 ");
            }
                else{
                    printf("0 ");
                }
        }
        printf("\n\n");
        }
         return 0;
    }