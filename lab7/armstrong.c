#include<stdio.h>
int amst(int n){
    int r=0,rem;
for(int i=1;n>0;i++){
rem=n%10;
r=rem*rem*rem+r;
n=n/10;
}
return r;
}
int main(){
    int n;
    printf("enter the number: ");
    scanf("%d",&n);
  int  r = amst(n);
    if(n==r){
       printf("%d  is a armstrong number",n);
   }
    else printf("%d  is not a armstrong number",n);
    return 0;
}