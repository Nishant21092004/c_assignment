#include<stdio.h>
void even(){
    return;
}
void odd(){
    return;
}
int main(){
    int n;
    printf("enter the number");
    scanf("%d",&n);
if(n%2==0){
    printf("the number is even");
}
else printf("the number is odd");
even();
odd();
    return 0;
}