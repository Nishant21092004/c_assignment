 // date Sun, Sep  7, 2024 11:04:24 PM 
 // made by nishant
#include<stdio.h>
#include<math.h>
int main(){
    int num,size=0,r=0;
    printf("enter the number you want to reverse \n");
    scanf("%d",&num);
    int temp=num;
    while(temp!=0){
        size+=1;
        temp/=10;
    };
    for(int i=1;size>=i;i++){
        r+=((num%10)*pow(10,size-i));
        num/=10;
    };
    printf("reversed number is %d",r);
    return 0;
}