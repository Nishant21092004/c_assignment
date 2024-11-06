#include<stdio.h>
int main(){
  int n=8;
   char a[50];
   printf("enter string");
   scanf("%s",a);
   printf("the unsorted array is: \n");
   for(int i=0;i<n;i++){
    printf("%d ",a[i]);
   }
  for(int j=0;j<=n-1;j++){
    for(int i=0;i<n-1-j;i++){
        if(a[i+1]<a[i]){
          int temp=a[i];
          a[i]=a[i+1];
          a[i+1]=temp;
        }
    }
  }
   printf("\n");
    printf("the smallest number is: \n");
   for(int i=0;i<n;i++){
    printf("%d ",a[i]);
   }
   int p=n-1;
    while(a[p]==a[p-1]){
     p--;
    }
    if(a[p]!=a[p-1]){
      int temp=a[p-1];
     a[p-1]=a[p];
     a[p]=temp; 
    }
    printf("\n");
    printf("the second smallest number is: \n");
   for(int i=0;i<n;i++){
    printf("%d ",a[i]);
   }
    return 0;
}