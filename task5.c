// max value 
#include<stdio.h>
int main(){
    int max=0;
    int arr[3][3]={0};
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            printf("Enter number in matrix[%d][%d}:\n", i+1, j+1);
            scanf("%d", &arr[i][j]);
        }
    }
    max= arr[0][0];

    for(int i = 0; i < 3; i++) {
        for(int j = 0; j <3 ; j++) {
            if(arr[i][j]>max){
                max= arr[i][j];
            }
        }
    }
    printf("\nMaximum value you entered=%d\n", max);
    return 0;
}   