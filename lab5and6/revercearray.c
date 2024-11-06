#include<stdio.h>
int main(){
    int a[10]={1,2,3,4,5,6,7,8,9,10};
    int b[10];
    printf("the reverce array is: \n");
    for(int i=0;i<10;i++){
        b[i]=a[9-i];
    }
    for(int i=0;i<10;i++){
        a[i]=b[i];
        printf("%d ",a[i]);
    }
    return 0;
}