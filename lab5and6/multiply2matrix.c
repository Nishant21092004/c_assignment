#include<stdio.h>
int main (){
   int a[3][3] ,b[3][3],c[3][3];
   printf("enter element of first matrix \n");
   for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
        printf("enter the element %d %d ",i,j);
        scanf(" %d",&a[i][j]);
    }
   }
   printf("enter element of second matrix \n");
   for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
       printf("enter the element %d %d ",i,j);
        scanf("%d",&b[i][j]);
    }
   }
   printf("the resultant matrix is\n");
    for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
        c[i][j]=0;
    for(int k=0;k<3;k++){
        c[i][j]+=a[i][k]*b[k][j];
    }  
    printf("%d ",c[i][j]);
    }
    printf("\n");
   }
    return 0;
}