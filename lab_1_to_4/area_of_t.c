 // Sat, Aug 31, 2024  7:45:39 PM 
 // created by nishant
#include<stdio.h>
#include<math.h>
int main(){
    float a,b,c; // declaring side variables
    printf("enter side one ");
    scanf("%f",&a); // taking input for first side
    printf("enter side two ");
    scanf("%f",&b); // taking input for second side
    printf("enter side three ");
    scanf("%f",&c); // taking input for third side
    float s=(a+b+c)/2.0; // calculating semi perimeter
    float area_of_triangle=sqrt((s*(s-a)*(s-b)*(s-c))); // calculating area using heron's formula
    printf("area os thriangles with sides %f %f %f is %f",a,b,c,area_of_triangle); // displaying result
    return 0;
}