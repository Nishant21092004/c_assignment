#include<stdio.h>
#include<limits.h>
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
    int max=INT_MIN;
    int min=INT_MAX;
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++)
        if(max<arr[i][j]){
            max=arr[i][j];
        }
    }
     for(int i=0;i<r;i++){
        for(int j=0;j<c;j++)
        if(min>arr[i][j]){
            min=arr[i][j];
        }
    }
    printf("%d\n",min);
    printf("%d",max);
    return 0;
}