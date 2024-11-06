#include<stdio.h>
void readbookinfo(char title[],char auther[],float *price){
    printf("enter the name of the book: ");
    scanf(" %[^\n]%*c",title);
     printf("name the auther: ");
    scanf(" %[^\n]%*c",auther);
    printf("enter the price: ");
    scanf("%f",price);
}
void displaybookinfo(char title[],char auther[],float price){
    printf("\ninformation of the book is\n");
    printf("title: %s\n",title);
    printf("auther: %s\n",auther);
     printf("price: %.3f",price);
}
int main(){
    char title[100];
    char auther[100];
    float price;
   readbookinfo(title,auther,&price);
   displaybookinfo(title,auther,price);
    return 0;
}