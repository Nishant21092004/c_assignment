#include <stdio.h>
int main() {
    int a[100], n, k;
   int  searchElement;
   int count=0;
    printf("enter the number of element in the array : ");
    scanf("%d",&n);
    printf("enter %d element:\n",n);
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("enter the searching elements:\n");
    scanf("%d",&k);
    for(int i=0;i<n;i++){
    if(k==a[i]){
       searchElement=1;
       count++;
    }
    }
    if(searchElement==1){
        printf("we got the searching element ");
    }
    else{
        printf("the searching element is not found");
    }
    printf("\n");
    printf("the searching element occure %d time in array",count);
    return 0;
}
