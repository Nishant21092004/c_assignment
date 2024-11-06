#include<stdio.h>
int main(){
   int r,c;
    printf("Enter number of rows: ");
    scanf("%d",&r);
    printf("Enter number of column: ");
    scanf("%d",&c);
    int  arr[r][c];
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
       printf("enter the element of index %d %d ",i,j);
       scanf("%d",&arr[i][j]);
        }
    }
 for(int i=0;i<r;i++){
    for(int j=0;j<c;j++){
        printf("%d ",arr[j][i]);
    }
     printf("\n");
 }
    return 0;
}