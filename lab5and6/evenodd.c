#include <stdio.h>
int main() {
     int arr[10]; // declare an array of 10 integers
     int evencount=0;
     int oddcount=0;
    printf("Enter 10 integers:\n");
    for (int i = 0; i < 10; i++) {
        scanf("%d", &arr[i]);
    }
    for(int i=0;i<10;i++){
        if(arr[i]%2==0){
            evencount++;
        }
        else {
            oddcount++;
        }
    }
            printf("%d numbers are even\n",evencount);
         printf("%d numbers are odd\n",oddcount);
    return 0;
}