 // date Sun, Sep  7, 2024 11:05:11 PM 
 // made by nishant 
#include<stdio.h>
int main(){
    int num;
    long long fact=1;
    printf("enter the number you what to find find factorial of");
    scanf("%d",&num);
    for(int i=1 ;i<=num;i++){
        fact*=i;
        printf("%d \n",fact);
    };
    printf("factorial of !%d = %d",num,fact);
    return 0;
}