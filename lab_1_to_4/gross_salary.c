 // date Tue, Sep 10, 2024  1:15:35 AM 
 // made by nishant 
#include<stdio.h>
int main(){
    float basic, gross, da, hra;
    printf("enter the basic da hra"); // telling user to enter salary
    scanf("%f %f %f", &basic,&da,&hra); 
    gross = basic + hra + da;
    printf("gross salary %f", gross); // finally printiong gross salry
    return 0;
}