#include<stdio.h>
int main(){
    int n;
    printf("Enter total element in both array: ");
    scanf("%d",&n);
  //  printf("Enter total number in array you want: ");
    //scanf("%d",&m);
    int  arr[n];
    for(int i=0;i<n;i++){
        printf("Enter element  %d of first array: ",i+1);
        scanf("%d",&arr[i]);
    }
  //  printf("Enter total element in second array: ");
    //scanf("%d",&n);
     int  b[n];
    for(int j=0;j<n;j++){
        printf("Enter element %d of second array: ",j+1);
        scanf("%d",&b[j]);
    }
    int c[n];
    for(int k=0;k<n;k++){
        c[k]=b[k]+arr[k];
    }
    printf("the sum of arrays is\n");
     for(int k=0;k<n;k++){
        printf("%d ",c[k]);
    }
    return 0;
}