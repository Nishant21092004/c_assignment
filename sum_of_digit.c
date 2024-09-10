 // date Sun, Sep  7, 2024 11:04:48 PM 
 // made by nishant 
#include<stdio.h>
int main(){
    int num,sum=0,temp;
    printf("enter n digit number");
    scanf("%d",&num);
    while(num!=0){
        sum+=num%10;
        num/=10;
    };
    printf("sum of all digits %d",sum);
    return 0;
}