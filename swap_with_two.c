 // Sat, Aug 29, 2024  7:27:05 PM 
 // made by nishant
#include<stdio.h>
int main(){
    int a,b;
    printf("enter both number");
    scanf("%d %d",&a,&b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("%d %d",a,b );
    return 0;
}