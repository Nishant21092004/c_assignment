#include<stdio.h>
void palindrome(int n){
    int a[n];
    for(int k=0;k<n;k++){
    printf("enter the element %d of the array: ",k);
    scanf("%d",&a[k]);
    }
    int b=0;
    for(int i=0;i<n/2;i++){
        if(a[i]==a[n-1-i]){
            b=1;
        }
    }
    if(b==1){
        printf("it is a palindrome");
    }
    else{
    printf("it is not a palindrome");
    }
}
int main(){
    int n;
    printf("enter n: ");
    scanf("%d",&n);
    palindrome(n);
    return 0;
}