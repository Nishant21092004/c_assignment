#include<stdio.h>
void swap(int* x,int* y){
    int temp= *x;
    *x=*y;
    *y=temp;
    return;
}
int main(){
    int a;
    printf("enter a before exchange:\n");
    scanf("%d",&a);
    int b;
     printf("enter b before exchange:\n");
    scanf("%d",&b);
    swap(&a,&b);
    printf("the value of a after exchange is: %d\n",a);
    printf("the value of b after exchange is: %d\n",b);
    return 0;
}