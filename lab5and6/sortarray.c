#include<stdio.h>
int main(){
    int a[5]={5,8,6,3,9};
    int b=0;
    for(int i=0;i<5;i++){
      for(int j=0;j<5;j++){
        if(a[i]<a[j]){
            b=1;
        }
       if(b==1){
        printf("%d",a[i]);
       }
       else if(b==0 && i!=j) {
        printf("%d",a[j]);
       }
      }
    }
    return 0;
}