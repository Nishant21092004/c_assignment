#include <stdio.h>
int main() {
     int arr[10]; // declare an array of 10 integers
     int positive=0;
     int negative=0;
     int zero=0;
    printf("Enter 10 integers:\n");
    for (int i = 0; i < 10; i++) {
        scanf("%d", &arr[i]);
    }
    for(int i=0;i<10;i++){
        if(arr[i]>0){
            positive++;
        }
        else if (arr[i]<0){
            negative++;
        }
        else{
            zero++;
        }
    }
            printf("%d elements are positive\n",positive);
         printf("%d elements are negative\n",negative);
         printf("%d elements are zero\n",zero);
    return 0;
}