 // date Mon, Sep  8, 2024 12:32:51 AM 
 // made by nishant 
#include<stdio.h>
int main(){
    int num;
    printf("enter the number you want to find factors of \n");
    scanf("%d",&num);
    printf("factors are ");
    for(int i=1;i<=num/2;i++){
        if(num%i==0){
            printf("%d ",i);
        };
    };
    return 0;
};