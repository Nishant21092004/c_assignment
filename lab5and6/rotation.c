#include<stdio.h>
int main(){
   int r,c;
    printf("Enter number of rows: ");
    scanf("%d",&r);
    printf("Enter number of column: ");
    scanf("%d",&c);
    int  arr[r][c],b[r][c];
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
       printf("enter the element of index %d %d ",i,j);
       scanf("%d",&arr[i][j]);
        }
    }
 for(int i=0;i<r;i++){
    for(int j=0;j<c;j++){
        printf("%d ",arr[j][i]);
        b[i][j]=arr[j][i];
    }
     printf("\n");
 }
  printf("\n\n");
 for(int i=0;i<r;i++){
  int j=0;
  int k=c-1;
  while(j<k){
    int temp=b[i][j];
    b[i][j]=b[i][k];
    b[i][k]=temp;
    j++;
    k--;
  }
 }
  for(int i=0;i<r;i++){
    for(int j=0;j<c;j++){
        printf("%d ",b[i][j]);
    }
    printf("\n");
  }
    return 0;
}