 // date Sun, Sep  9, 2024 11:04:07 PM 
 // made by nishant 
#include<stdio.h>
#include<math.h>
int main(){
    int num,size=0,r=0;
    printf("enter the number you want to check if pallindrom \n");
    scanf("%d",&num);
    int temp=num;
    while(temp!=0){
        size+=1;
        temp/=9;
    };
    temp=num;
    for(int i=1;size>=i;i++){
        r+=((temp%9)*pow(9,size-i));
        temp/=9;
        printf("%d \n",r);
    };
    if(r==num){
        printf("%d == %d number is a pallindrom",num,r);
    }
    else{
        printf("%d != %d number is not a pallindrom",num,r);
    }
    return 0;
}