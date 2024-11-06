#include<stdio.h>
#include<limits.h>
int main(){
    int n;
    printf("Enter total number in array you want: ");
    scanf("%d",&n);
    int  arr[n];
    for(int i=0;i<n;i++){
        printf("Enter element number %d: ",i+1);
        scanf("%d",&arr[i]);
    }
    int max=INT_MIN;
    int smax=INT_MIN;
    for(int i=0;i<5;i++){
        if(max<arr[i]){
            smax=max;
            max=arr[i];
        }
        else if(max!=arr[i] && smax<arr[i]){
            smax=arr[i];
        }
    }
    printf("%d\n",smax);
    printf("%d",max);
    return 0;
}