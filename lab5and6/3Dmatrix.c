#include <stdio.h>
int main() {
  int  a[3][2][3]={5,4,7,9,3,5,8,6,1,4,7,2,5,8,7,4,6,4};
    for(int i=0;i<3;i++){
        for(int j=0;j<2;j++){
            for(int k=0;k<3;k++){
                printf("%d ",a[i][j][k]);
            }
            printf("\n");
        }
        printf("\n");
    }
    return 0;
}
